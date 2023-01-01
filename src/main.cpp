/*prosty program, którego nawet nie da się nazwać programem. Miga co sekundę wbudowaną diodą led
        https://github.com/matrix00660066/01_miganie
*/

#include <Arduino.h>

int ledPin = 13;
int szajs = 2;

void setup()
{
  pinMode(ledPin, OUTPUT);
}

void wlacznik();

void loop()
{
  digitalWrite(ledPin, 1);
  delay(1000);
  digitalWrite(ledPin, 0);
  delay(1000);
}

void wlacznik() // ta prosta funkjca na razie nie robi nic
{               // to tylko test czy kompilator nie wywala błędów
}
