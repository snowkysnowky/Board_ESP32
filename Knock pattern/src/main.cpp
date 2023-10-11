#include <Arduino.h>
#define pinVibrate 26
#define VibMotor 13
bool state = 0;
// put function declarations here:


void setup() {
  // put your setup code here, to run once:
  pinMode(pinVibrate,INPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(VibMotor,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(pinVibrate) == HIGH && state == 0){
    digitalWrite(LED_BUILTIN,HIGH);
    digitalWrite(VibMotor,HIGH);
    state = 1;
  }else if(digitalRead(pinVibrate) == HIGH && state == 1){
    digitalWrite(LED_BUILTIN,LOW);
    digitalWrite(VibMotor,LOW);
    state = 0;
  }
}

// put function definitions here:
