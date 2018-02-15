/*A libuary is useful if i have so many devices running the same code
 * on a small network. like my sim800l control my fridge, tv and door 
 * i can use one libuary and put all the functions inside
 * so my main.cpp can communicate with the other devices connected 
 */

/*
 * this sketch blinks leds on pin 13, 12 and 11 in a trafic light function 
 */

#include "TestLibuary.h"
 
TestLib_1 testLib_1(13) ;//instance of my class TestLib_1
TestLib_1 Second(12); //each time i change the number on an instance its 
TestLib_1 testLib_2(11) ;//becomes specific to that cause i used a private variable
void setup()

{
  Serial.begin(9600);

  
  testLib_1.PrintText();
}

void loop() {
  testLib_1.Blink_2();
  delay(2000);
  Second.Blink_2();
  delay(2000);
  testLib_2.Blink_2();
  delay(2000);
}
