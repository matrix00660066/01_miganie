#include <Arduino.h>
#include <Wire.h>

int ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);
  // put your setup code here, to run once:
}

void wlacznik();

void loop()
{
  digitalWrite(ledPin, 1);
  delay(1000);
  digitalWrite(ledPin, 0);
  delay(1000);

  // put your main code here, to run repeatedly:
}

// #########################################################
void wlacznik()
{
}
// #########################################################