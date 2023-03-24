#include <Wire.h>

#define addr 0x57


byte doc;
void setup() {
  Wire.begin();       
  Serial.begin(115200);  
 
}

void loop() {
  int doc1, doc2;
  Wire.beginTransmission(addr);
  Wire.write(0x09);
   Wire.write(0b11000010);
   Wire.endTransmission();

   Wire.beginTransmission(addr);
  Wire.write(0x11);
   Wire.write(0b00010010);
   Wire.endTransmission();

 Wire.beginTransmission(addr);
 Wire.write(0x0C);
  Wire.write(0x7F);
 Wire.endTransmission();
}