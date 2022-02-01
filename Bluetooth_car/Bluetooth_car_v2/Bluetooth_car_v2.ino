#include <SoftwareSerial.h>

SoftwareSerial mySerial(2, 3); // RX, TX

void setup() {
  Serial.begin(115200);
  while (!Serial) {
  }
  Serial.println("Goodnight moon!");
  mySerial.begin(9600);
  mySerial.println("Hello, world?");
}

void loop() 
{
  if (mySerial.available())
    Serial.write(mySerial.read());
  if (Serial.available())
    mySerial.write(Serial.read());
}
