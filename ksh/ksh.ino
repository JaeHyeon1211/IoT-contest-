#include <Arduino.h>
#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <WiFiClient.h>
#include <string.h>

#define USE_SERIAL Serial

ESP8266WiFiMulti WiFiMulti;
WiFiClient client;

const char * host = "10.10.141.188";
const uint16_t port = 5000;

int trig = 13;
int echo = 12;
int button = 3;
int LED = 4;
bool led_status = false;


char msg[30] = {};
unsigned long past = 0;
int pre_charging = 0;

int init_conn = 0; //입차및출차시 주소, 포트 연결하여 In,Out으로 로그인
int msg_RevData; //입차시 1, 출차시 2 출력

void ClientConn();
void MsgSend();
void ledcontrol(char *data);

void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(14, OUTPUT);
  pinMode(button, INPUT);
  pinMode(LED, OUTPUT);

  WiFi.begin("iot24kcci", "iot40000");  //WiFi 연결
  while (WiFi.status() != WL_CONNECTED) {

    delay(500);
  }
  Serial.println("Connected to wifi successful!");
}

int flag = 0;

void loop() {
  char ch[30] = {0};
  int index = 0;
  int str_len;
  if (flag == 0) {
    ClientConn();
    client.print("[SPOT1:PASSWD]");
    flag = 1;
  }

  if ((WiFiMulti.run() == WL_CONNECTED))
  {
    char * car_info[4];

    memset(ch, 0, sizeof(ch));
    while (client.available()) {
      // ch = static_cast<char>(client.read());

      ch[index++] = static_cast<char>(client.read());
      if (ch[index - 1] == 'L')
      {
        Serial.print("first CH = ");
        Serial.println(ch);

        char *pToken;
        char *pArray[10] = {0};
        ch[index - 1] = '\0';
        ch[0] = '@';
        ch[6] = '@';
        str_len = strlen(ch);
        //Serial.print(ch);
        //pToken = strtok(ch, "@");
        pToken = strtok(ch, "@");

        int i = 0;
        while (pToken != NULL)
        {
          pArray[i] = pToken;
          Serial.print(i);
          Serial.print(" = ");
          Serial.println(pToken);

          if (++i > 4)
            break;
          pToken = strtok(NULL, "@");
        }

        if (strcmp(pArray[0], "admin") == 0) {
          ledcontrol(pArray[1]);
          Serial.print("receive from admin = ");
          Serial.println("receive from admin");

        }
        else if (strcmp(pArray[0], "block") == 0) {
          Serial.println("receive from admin");
          car_info[1] = pArray[1]; // In/Out
          car_info[2] = pArray[2]; // Car Number
          car_info[3] = pArray[3]; // Type

          if (atoi(car_info[1]) == 1) {
            while (1) {
              digitalWrite(trig, HIGH);
              delayMicroseconds(10);
              digitalWrite(trig, LOW);
              int dis = pulseIn(echo, HIGH) * 340 / 2 / 10000;
              Serial.print("dis = ");
              Serial.println(dis);

              if (dis > 15) {
                if (led_status == false) {
                  digitalWrite(LED, HIGH);
                }
                else {
                  digitalWrite(LED, LOW);
                }
                led_status = !led_status;
                continue;
              }
              else if (dis <= 15 && dis != 0) {
                Serial.println("들어왔다!");
                digitalWrite(LED, HIGH);
                if (digitalRead(button) == 1) {
                  break;
                }
              }
            }

            delay(300);
            Serial.println("Moving Start");
            while(!client.available()){
              Serial.println("대기중...");
            }
            char send_msg[30] = "";
            //memset(send_msg, 0, sizeof(send_msg));
            sprintf(send_msg, "[Jetson1] %s@%s@%sL", car_info[1], car_info[2], car_info[3]);
            client.print(send_msg);
            Serial.println(send_msg);

            int ori_val, cur_charging;
            char bat_msg[20] = "";
            char Bat_Stop[30] = "";

            memset(Bat_Stop, 0, sizeof(Bat_Stop));
            index = 0;
            while (1) {
              ori_val = analogRead(A0);
              //Serial.println(ori_val);
              cur_charging = map(ori_val, 0, 1023, 0, 100);
              if (cur_charging > pre_charging+1 || cur_charging < pre_charging - 1 )
              {
                memset(bat_msg, 0, sizeof(bat_msg));
                sprintf(bat_msg, "[admin] %d@\n", cur_charging);
                Serial.println(bat_msg);
                client.print(bat_msg);
                pre_charging = cur_charging;
                
                delay(100);
              }
              // [Jetson1]break;
              if (client.available()) {
                Bat_Stop[index++] = static_cast<char>(client.read());
                if (Bat_Stop[index - 1] == 'L')
                {
                  Serial.println(Bat_Stop);
                  char *pToken2;
                  char *pArray2[10] = {0};
                  Bat_Stop[index - 1] = '\0';
                  //str_len = strlen(Bat_Stop);
                  Bat_Stop[0] = '@';

                  //Serial.print(ch);
                  //strtok(Bat_Stop,"[");
                  pArray2[0] = strtok(Bat_Stop, "]");
                  
                  Serial.print("pArray2 = ");
                  Serial.println(pArray2[0]);
                  pArray2[1] = strtok(NULL, " ");

                  if ((strcmp(pArray2[0], "[admin") == 0 && strcmp(pArray2[1], "OFF") == 0) || (strcmp(pArray2[0], "Jetson1") == 0 && strcmp(pArray2[1], "OFF") == 0)) {
                    digitalWrite(LED,LOW);
                    break;
                  }
                }
              }
              if (cur_charging == 100) {
                digitalWrite(LED,LOW);
                break;
              }
            }
            Serial.println("충전완료");
            client.print("[Jetson1]%s@%s@%sL\n");
          }
          else {
            Serial.println("Bye");
          }
        }
      }
    }
  }
}


void ClientConn()
{
  if (!client.connect(host, port)) {
    Serial.println("Connection to host failed");
    delay(1000);
    return;
  }
  else
    Serial.println("Connected to CarTower server successful!");
}

void ledcontrol(char *data)
{
  if (strcmp(data, "ON") == 0)
  {
    digitalWrite(4, HIGH);
  }
  else if (strcmp(data, "OFF") == 0)
  {
    digitalWrite(4, LOW);
  }

}
