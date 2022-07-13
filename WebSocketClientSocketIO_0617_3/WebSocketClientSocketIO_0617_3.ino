#include <Arduino.h>

#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <WiFiClient.h>
#include <WebSocketsClient.h>
#include <Hash.h>

#define USE_SERIAL Serial

ESP8266WiFiMulti WiFiMulti;
WiFiClient client;
WebSocketsClient webSocket;


const char * host = "10.10.141.45";
const uint16_t port = 5000;

int trig = 13;
int echo = 12;
char msg[30] = {};
unsigned long past = 0;

int conn_time = 0;
int disConn_time = 0;
int Conn_Revtime = 0;
int msg_Rev = 0; //message 보내라
int init_conn = 0; //거리가 가까워지면 주소, 포트 연결
int conn; //거리가 가까우면 1, 멀어지면 2


void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  WiFi.begin("iot24kcci", "iot40000");
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
    Serial.println(dis);

    if (dis < 35)
    {
      if (init_conn == 1) {
        if (!client.connect(host, port)) {
          Serial.println("Connection to host failed");
          delay(1000);
          return;
        }
        client.print("[1:PASSWD]");
        init_conn = 0;
      }
      msg_Rev = 1;
      conn = 1;
    }

    else if (dis > 40 )
    {
      //Serial.println("client disconnent");
      conn = 2;
      msg_Rev = 2;
      init_conn = 1;
    }



    if (msg_Rev == 1)
    {
      unsigned long now = millis();
      
      if (now - past >= 2000)
      {
        past = now;
        Conn_Revtime = 1;
      }

      if (Conn_Revtime == 1)
      {
        sprintf(msg, "[ALLMSG]%d\n", conn);
        Serial.println(msg);
        client.print(msg);
        Conn_Revtime = 0;

      }
/*
      sprintf(msg, "[ALLMSG]%d\n", conn);
      Serial.println(msg);
      client.print(msg);
      //delay(500);
      */
    }
    else if (msg_Rev == 2)
    {
      sprintf(msg, "[ALLMSG]%d\n", conn);
      //Serial.println(msg);
      client.print(msg);
      client.stop();
      //delay(500);

    }
    delay(500);
    msg_Rev = 0;

  }
}
