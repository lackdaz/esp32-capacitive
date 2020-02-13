#include <Arduino.h>
#include <TaskScheduler.h>

double x; // global variables

#define TOUCH_PIN 13

Scheduler ts;

void touch();

Task task_touch(TASK_MILLISECOND * 100 , TASK_FOREVER, &touch, &ts, true );

void touch() {
  x = touchRead(TOUCH_PIN);
  Serial.println(x);
}

void setup() {
  Serial.begin(115200);
  delay(100); // give me time to bring up serial monitor
  // p.Begin(); // start plotter
  // p.AddTimeGraph( "Capactive Touch Sensing", 1500, "Sense Value", x ); // add any graphs you want
}

void loop() {
  ts.execute();
}