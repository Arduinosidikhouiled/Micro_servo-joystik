#include "Servo.h"
Servo myServo ;
int servoPos ;
int yPin = A1 ;
int buttonPin = 9 ;
int readValue ;
int yValue ;
int ledPin = 13 ;

void setup() {
  
pinMode (buttonPin , INPUT_PULLUP);
pinMode (ledPin , OUTPUT ) ;
myServo.attach (10);
pinMode (yPin , INPUT ) ;
Serial.begin (9600) ;}

void loop() {
  
yValue = analogRead (yPin);
servoPos = map(yValue,0 ,1023 , 0 , 180 );
myServo.write(servoPos);
readValue = digitalRead (buttonPin);
Serial.println (readValue);
if (readValue == LOW){
  digitalWrite (ledPin,HIGH);
  delay (200);
    digitalWrite (ledPin,LOW);
  delay (200);}
  else {digitalWrite (ledPin,LOW);}}
