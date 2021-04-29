#include <Servo.h>
Servo servo1;
int Red=8;
int Blue=9;
int Green=10;
int pinpot=A0;
int val1;


void setup()
{
 servo1.attach(6);
 pinMode(Red, OUTPUT);
 pinMode(Blue, OUTPUT);
 pinMode(Green, OUTPUT);
 Serial.begin(9600);
 
}
 
void loop() {
servo1.write(0);
val1=analogRead(A3);
val1=map( val1, 0,1023,0,180);

if (val1<=60){
servo1.write(val1);
digitalWrite(Red, HIGH);
digitalWrite(Blue, LOW);
digitalWrite(Green, LOW);


  }

 

 else if (val1 <=120){
servo1.write(val1);
digitalWrite(Blue, HIGH);
digitalWrite(Red, LOW);
digitalWrite(Green, LOW);


  }
else (val1<=180);{
servo1.write(val1);
digitalWrite(Green, HIGH);
digitalWrite(Blue, LOW);
digitalWrite(Red, LOW);
}
}
