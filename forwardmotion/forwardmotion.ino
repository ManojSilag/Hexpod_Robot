#include<Servo.h>
#include<SoftwareSerial.h>
Servo lift;
Servo front;
Servo rear;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lift.attach(10);
  rear.attach(11);
  front.attach(9);
  rear.write(90);
  front.write(90);
  lift.write(90);
  delay(2000);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  lift.write(120);
  delay(100);
  front.write(60);
  rear.write(60);
  delay(100);
  lift.write(90);
  delay(100);
  lift.write(60);
  delay(100);
  front.write(90);
  rear.write(90);
  delay(100);
  lift.write(90);
  delay(100);
  
}
