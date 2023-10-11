#include <Arduino.h>
#define pinVibrate 26
// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  pinMode(pinVibrate,INPUT);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(pinVibrate) == HIGH){
    digitalWrite(LED_BUILTIN,HIGH);
  }else{
    digitalWrite(LED_BUILTIN,LOW);
  }
}

// put function definitions here:
