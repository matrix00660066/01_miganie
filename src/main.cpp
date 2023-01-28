/*prosty program, którego nawet nie da się nazwać programem. Miga wbudowaną diodą led
    https://github.com/matrix00660066/01_miganie
*/
// kolorowanie składni
//*kolor
// kolor
// todo kolor
//! kolor
//?kolor

#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

int ledPin = 13;

LiquidCrystal_I2C lcd(0x27, 16, 2); // tworzenie klasy instancji

void wlacznik(); // deklaracja funkcji włącznik

void setup()
{
  pinMode(ledPin, OUTPUT);
  lcd.init();
  lcd.clear();
  delay(10);
  lcd.backlight();
  // Serial.begin(9600);
  Serial.begin(115200);
  // lcd.noBacklight();//wyłącza podświetlanie
}

void loop()
{
  digitalWrite(ledPin, 1);
  delay(50);
  digitalWrite(ledPin, 0); // kolor
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
  lcd.print("     Hallo     ");
  delay(500);
  lcd.setCursor(0, 0);
  lcd.print("                ");
  delay(2500);
  wlacznik();
}
void wlacznik() // ta prosta funkjca na razie nie robi nic, to tylko test czy kompilator nie wywala błędów wywołania funkcji
{
  lcd.setCursor(0, 0);
  lcd.print("To jest funkcja ");
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print(" Koniec");
  lcd.setCursor(14, 0);
  lcd.print("i ");
  delay(1000);
  lcd.setCursor(0, 0);
  lcd.print("                ");
}
