#include <xConfig.h>
#include <xCore.h>
#include <xOD01.h>
#include "TIMER_CTRL.h"
#include <xSW01.h>



xSW01 SW01;

unsigned long currentMilli = 0;
int ledID = 0;

bool fade_flag1 = true;
unsigned long previousMilli1 = 0;    // timing variable for LEDS
int LED_state1 = 0;
bool fade_flag2 = true;
unsigned long previousMilli2 = 0;    // timing variable for LEDS
int LED_state2 = 0;
bool fade_flag3 = true;
unsigned long previousMilli3 = 0;    // timing variable for LEDS
int LED_state3 = 0;

// Create a variable to store the data read from SW01  
  float tempC;
  float tempF;
  float humidity;
  float pressure;




void setup() {
  // put your setup code here, to run once:
  setup_program();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  main_program();
}
