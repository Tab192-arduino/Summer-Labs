int redled = 9;
int grnled = 10;
int bluled = 11;


void setup() {
  // put your setup code here, to run once:
pinMode(redled, OUTPUT);
pinMode(grnled, OUTPUT);
pinMode(bluled, OUTPUT);


digitalWrite(redled, HIGH);
digitalWrite(grnled, HIGH);
digitalWrite(bluled, HIGH);
}

void loop() {

  digitalWrite(redled, LOW);
  delay(1000);
  digitalWrite(redled, HIGH);
  delay(1000);
  digitalWrite(grnled, LOW);
  delay(1000);
  digitalWrite(grnled, HIGH);
  delay(1000);
  digitalWrite(bluled, LOW);
  delay(1000);
  digitalWrite(bluled, HIGH);
  delay(1000);


}
