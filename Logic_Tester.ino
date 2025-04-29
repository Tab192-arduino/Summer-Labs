#include <LiquidCrystal.h>

LiquidCrystal lcd (12,11,5,4,3,2);
int xistorPin = 6;
int digitalStatus = 0;


void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("LOGIC TESTER");
pinMode(xistorPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalStatus = digitalRead(xistorPin);
if (digitalStatus == HIGH) {
  lcd.setCursor(0,1);
  lcd.print("HIGH (1) ");
}
else {
  lcd.setCursor(0,1);
  lcd.print(" LOW (0) ");
}

}
