/*
 * IRremote: IRrecvDemo - demonstrates receiving IR codes with IRrecv
 * An IR detector/demodulator must be connected to the input RECV_PIN.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>

int RECV_PIN = 11;
int LED =12;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  pinMode(RECV_PIN,INPUT);
  pinMode(LED,OUTPUT);
  irrecv.enableIRIn(); // Start the receiver
  Serial.begin(9600);
}

void loop() {
  int i=0;
  if(irrecv.decode(&results)) {
    translateIR();
    irrecv.resume();
  }
}

void translateIR()
{
   switch(results.value) {
    
    case 0xA90:
    Serial.println("Led on");
    digitalWrite(12,HIGH);
    break;

    default:
    Serial.println("Unknown Button");
   }
   delay(500);
}

