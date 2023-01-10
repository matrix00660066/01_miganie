/*prosty program, którego nawet nie da się nazwać programem. Miga co sekundę wbudowaną diodą led
        https://github.com/matrix00660066/01_miganie
*/

#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int ledPin = 13;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  pinMode(ledPin, OUTPUT);
  lcd.init();
  lcd.clear();
  delay(250);
  lcd.backlight();
  Serial.begin(9600);
  lcd.setCursor(0, 0);
  lcd.print(" Start programu ");
  delay(500);
  lcd.clear();
}

void wlacznik(); // deklaracja funkcji włącznik

void loop()
{
  digitalWrite(ledPin, 1);
  delay(50);
  digitalWrite(ledPin, 0);
  delay(50);
  digitalWrite(ledPin, 1);
  delay(50);
  digitalWrite(ledPin, 0);
  delay(50);
  digitalWrite(ledPin, 1);
  delay(50);
  digitalWrite(ledPin, 0);
  delay(800);
  lcd.setCursor(0, 0);
  lcd.print("Hallo");
  delay(500);
  lcd.setCursor(0, 0);
  lcd.print("                ");
  delay(2500);
  wlacznik();
}

void wlacznik() // ta prosta funkjca na razie nie robi nic
{               // to tylko test czy kompilator nie wywala błędów
  lcd.setCursor(0, 0);
  lcd.print("Funkcja wlacznik");
  delay(10000);
  lcd.clear();
}
