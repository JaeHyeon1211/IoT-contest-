#include <Arduino.h>

#include <ESP8266WiFi.h>
#include <ESP8266WiFiMulti.h>
#include <WiFiClient.h>3
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




void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);


  WiFi.begin("iot24kcci", "iot40000");
  while(WiFi.status() != WL_CONNECTED) {
    delay(500);
  }

   if (!client.connect(host, port)) {
 
      Serial.println("Connection to host failed");
      delay(1000);
      return;
    }
 
    Serial.println("Connected to server successful!");
    Serial.println("[1:PASSWD]");
    client.print("[1:PASSWD]");
}


void loop() {
    if ((WiFiMulti.run() == WL_CONNECTED)){

          digitalWrite(trig, HIGH);
          delayMicroseconds(10);
          digitalWrite(trig, LOW);
          int dis = pulseIn(echo, HIGH)* 340/2/10000;
          Serial.println(dis);
          sprintf(msg, "[19]%d\n",dis);
          Serial.println(msg);
    
          client.print(msg);

    }
    
}
