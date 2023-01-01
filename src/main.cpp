/*prosty program, którego nawet nie da się nazwać programem. Miga co sekundę wbudowaną diodą led
        https://github.com/matrix00660066/01_miganie
*/

#include <Arduino.h>

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
}

void wlacznik()
{
  int linia = 10;
}
