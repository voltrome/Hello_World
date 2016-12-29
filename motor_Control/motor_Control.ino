int potPin=A0;
int motorPin=9;

int potValue=0;
int motorValue=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potValue=analogRead(potPin);
  motorValue=map(potValue,0,1023,0,255);

  analogWrite(motorPin,motorValue);

  Serial.print("Potentiometer = ");
  Serial.print(potValue);
  Serial.print("\t Motor = ");
  Serial.print(motorValue);

  delay(2000);
}
