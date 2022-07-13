#include <Arduino.h>

#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <WiFiClient.h>

#define USE_SERIAL Serial

ESP8266WiFiMulti WiFiMulti;
WiFiClient client;


const char * host = "10.10.141.45";
const uint16_t port = 5000;

int trig = 13;
int echo = 12;
char msg[30] = {};
unsigned long past = 0;

int init_conn = 0; //입차및출차시 주소, 포트 연결하여 In,Out으로 로그인
int msg_Rev = 0; //입차 및 출차 msg_RevData message 
int msg_RevData; //입차시 1, 출차시 2 출력


void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  WiFi.begin("iot24kcci", "iot40000");  //WiFi 연결
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
  }
  if (!client.connect(host, port)) {
    Serial.println("Connection to host failed");
    delay(1000);
    return;
  }
  Serial.println("Connected to server successful!");

}


void loop() {

  if ((WiFiMulti.run() == WL_CONNECTED))
  {
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);
    int dis = pulseIn(echo, HIGH) * 340 / 2 / 10000;
    //Serial.println(dis);

    if (dis < 35)
    {
      if (init_conn == 1) {
        if (!client.connect(host, port)) {
          Serial.println("Connection to host failed");
          delay(1000);
          return;
        }
        client.print("[In:PASSWD]");
        init_conn = 0;
      }
      msg_RevData = 1;
      msg_Rev = 1;

    }

    else if (dis > 40 )
    {
      if (init_conn == 2) {
        if (!client.connect(host, port)) {
          Serial.println("Connection to host failed");
          delay(1000);
          return;
        }
        client.print("[Out:PASSWD]");
        init_conn = 0;
      }
     
      msg_RevData = 0;
      msg_Rev = 2;
    }

    if (msg_Rev == 1)
    {
      sprintf(msg, "[ALLMSG]%d\n", msg_RevData);
      Serial.println(msg);
      client.print(msg);
      client.stop();
      init_conn = 2;

    }
    else if (msg_Rev == 2)
    {
      sprintf(msg, "[ALLMSG]%d\n", msg_RevData);
      Serial.println(msg);
      client.print(msg);
      client.stop();
      init_conn = 1;
     
    }
    delay(500);
    msg_Rev = 0;

  }
}
