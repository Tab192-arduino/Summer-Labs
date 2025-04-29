#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  // Adjust pins as needed

int buttonPin = 6;
int RPin = 7;
int GPin = 8;
int BPin = 9;

int buttonStatus = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(RPin, OUTPUT);
  pinMode(GPin, OUTPUT);
  pinMode(BPin, OUTPUT);

  lcd.begin(16, 2);
}

void loop() {
  buttonStatus = digitalRead(buttonPin);

  if (buttonStatus == HIGH) {
    lcd.clear();
    delay(500);
    for (int i = 0; i <= 5; i++) {
      lcd.setCursor(8, 0);
      lcd.print(i);

      digitalWrite(BPin, HIGH);
      digitalWrite(RPin, LOW);
      delay(500);

      digitalWrite(RPin, HIGH);
      digitalWrite(GPin, LOW);
      delay(500);

      digitalWrite(GPin, HIGH);
      digitalWrite(BPin, LOW);
      delay(500);
    }

  } else {
    digitalWrite(RPin, HIGH);
    digitalWrite(GPin, HIGH);
    digitalWrite(BPin, HIGH);

    lcd.setCursor(0, 0);
    lcd.print("Secret Word is: ");
    lcd.setCursor(0, 1);
    lcd.print("Cat");
  }
}
