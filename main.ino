#include "define.h"

void setup()
{
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(outPin, INPUT); //out from sensor becomes input to arduino

    // Setting frequency scaling to 100%
  digitalWrite(s0,HIGH);
  digitalWrite(s1,HIGH);
  
  Serial.begin(9600);
  Serial.println("Color Detector");
  startTiming = millis();
  }
  
  void loop()
{
  getColor();
  if (DEBUG) printData(); 
  elapsedTime = millis()-startTiming; 
  if (elapsedTime > 1000) 
  {
    printData();
    startTiming = millis();
  }
}
