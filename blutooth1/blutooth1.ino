#include<SoftwareSerial.h>
SoftwareSerial BT(12, 13);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  BT.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (BT.available()) {
    char c = BT.read();
    Serial.println(c);
    if (c == 'w') {
      Serial.println("Forward");
    }
    if (c == 'b') {
      Serial.println("Backward");
    }
    if (c == 'l') {
      Serial.println("Left");
    }
    if (c == 'r') {
      Serial.println("Right");
    }
    if (c == 's') {
      Serial.println("Stop");
    }
  }

}
