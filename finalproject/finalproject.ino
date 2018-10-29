#include<Servo.h>
#include<SoftwareSerial.h>
SoftwareSerial BT(12, 13); //Tx,Rx respectively
Servo lift;
Servo front;
Servo rear;
char currstatus;


void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 BT.begin(9600);
  lift.attach(10);
  rear.attach(11);
  front.attach(9);
  
  rear.write(90);
  front.write(90);
  lift.write(90);
  delay(2000);
  currstatus ='s';
}

void forward(){
  //to move fowward
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

void backward(){
  //to move back
   lift.write(120);
  delay(100);
  front.write(120);
  rear.write(120);
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

 void Stop(){
  lift.write(90);
  delay(100);
  front.write(90);
  delay(100);
  rear.write(90);
  delay(100);
 }
void loop() {
  // put your main code here, to run repeatedly:
  while(BT.available())
  {
    currstatus=BT.read();
  }
  if(currstatus =='w')
  {
    forward();
  }
   if(currstatus =='b')
  {
    backward();
  } 
  if(currstatus =='s')
  {
    Stop();
  }
}
