#include <Arduino.h>

// put function declarations here:
#define vibrate 13 

void setup() {
  // put your setup code here, to run once:
  pinMode(vibrate,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(vibrate,HIGH);
  delay(1000);
  digitalWrite(vibrate,LOW);
  delay(500);
}

