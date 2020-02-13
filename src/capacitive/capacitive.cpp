#include <Arduino.h>

double x; // global variables

#define TOUCH_PIN 13

void setup() {
  Serial.begin(115200);
  delay(100); // give me time to bring up serial monitor
  // p.Begin(); // start plotter
  // p.AddTimeGraph( "Capactive Touch Sensing", 1500, "Sense Value", x ); // add any graphs you want
}

void loop() {
  x = touchRead(TOUCH_PIN);
  Serial.println(x);
  // p.Plot();
  delay(100);
}