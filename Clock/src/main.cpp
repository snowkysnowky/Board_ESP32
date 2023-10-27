#include <Arduino.h>
#include <WiFi.h>
#include <NTPClient.h>
#include <WiFiUdp.h>
#include <TM1637.h>

// Module connection pins (Digital Pins)
#define CLK 32
#define DIO 33

const char *ssid     = "POCO F5";
const char *password = "password.";

// Define NTP Client to get time
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);

TM1637 display(CLK, DIO);

int hourStamp;
int minuteStamp;
int waktu;

void printTime()
{
  timeClient.update();
  hourStamp = timeClient.getHours() * 100;
  minuteStamp = timeClient.getMinutes();
  waktu = hourStamp + minuteStamp;
  display.display(waktu); // Display the time
  display.switchColon()->refresh();
}

void setup(){
  Serial.begin(9600);

  WiFi.begin(ssid, password);

  while ( WiFi.status() != WL_CONNECTED ) {
    delay ( 500 );
    Serial.print ( "." );
  }

  timeClient.begin();
  timeClient.setTimeOffset(25200);
  display.init();
  display.setBrightness(5);
  
}

void loop() {
  printTime();
  delay(1000);
}

