#include <Arduino.h>

// put function declarations here:
#define RX2 16
#define TX2 17

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial2.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial2.println("test");
  if(Serial2.available()){
    Serial.println(Serial2.readString());
  }
}

// put function definitions here:
