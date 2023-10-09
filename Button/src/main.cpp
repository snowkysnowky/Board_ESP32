#include <Arduino.h>

#define button1 36
#define button2 39
#define button3 34

// put function declarations here:
bool state = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(button3,INPUT);
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button1) == HIGH){
    digitalWrite(LED_BUILTIN,HIGH);
  }else if(digitalRead(button1) == LOW && digitalRead(button2) == HIGH && state == 0){
    digitalWrite(LED_BUILTIN,HIGH);
    state = 1;
  }
  else if(digitalRead(button1) == LOW && digitalRead(button3) == HIGH && state == 1){
    digitalWrite(LED_BUILTIN,LOW);
    state = 0;
  }else if(digitalRead(button1) == LOW && state == 0){
    digitalWrite(LED_BUILTIN,LOW);
    
  }
}


