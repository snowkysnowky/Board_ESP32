#include <Arduino.h>

#define pinIR  25   //Deklarasi pin sensor pada A0
int datasensor;

void setup() {
  Serial.begin(9600);
  pinMode(pinIR, INPUT);  //Deklarasi pin A0 sebagai input
  pinMode(LED_BUILTIN, OUTPUT);   //Deklarasi pin A1 sebagai output
  Serial.println("Deteksi Sensor IR");
  delay(3000);
}

void loop() {
  datasensor = digitalRead(pinIR); //instruksi untuk pantau nilai digital
  Serial.print("Data Sensor: ");
  Serial.println(datasensor);
  datasensor = digitalRead(pinIR); //instruksi untuk pantau nilai digital
  if (datasensor == LOW) {             //instruksi untuk mengaktifkan LED_BUILTIN saat objek terdeteksi
    Serial.println("Tedeteksi");
    digitalWrite(LED_BUILTIN, HIGH);
  } 
  
  else {
    Serial.println("Tidak terdeteksi");//instruksi untuk mengaktifkan LED_BUILTIN saat objek terdeteksi
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(100);
}