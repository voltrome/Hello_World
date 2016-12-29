int motorpin=9;

void setup() {
  // put your setup code here, to run once:
  pinMode(motorpin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int motorValue=0;motorValue<=255;motorValue+=5) {
    analogWrite(motorpin,motorValue);
    delay(30);
  }

  for(int motorValue=255;motorValue>=0;motorValue-=5) {
    analogWrite(motorpin,motorValue);
    delay(30);
  }
}
