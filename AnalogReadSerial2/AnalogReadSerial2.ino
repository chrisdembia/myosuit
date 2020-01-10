#include <FilterTwoPole.h>
#include <FilterDerivative.h>
#include <FloatDefine.h>
#include <FilterOnePole.h>
#include <RunningStatistics.h>
#include <Filters.h>

/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = abs(analogRead(A3) - 511);
  
  // print out the value you read:
  Serial.println(sensorValue);
  delay(1);        // delay in between reads for stability
  //digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  //delay(1);                       // wait for a second
  //digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  //delay(1);  
}
