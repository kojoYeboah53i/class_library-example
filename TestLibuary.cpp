//TestLibuary.cpp

#include "Arduino.h"  //adds the Arduino.h file so i could use, Serial.println,PinMode,delay, etc
#include "TestLibuary.h" //adds my class for definition  


/*****************************/
//constructor
TestLib_1::TestLib_1(int pin)

{  pinMode(pin, OUTPUT);
  
    _pin = pin;  
  //_pin is a private variable used within the class 
  
  Serial.println("Inside contructor! ");
  }


/**********************************************/

//public function Blink definiftions
void TestLib_1::PrintText()
{
  Serial.println("inside //public function Blink definiftion");
}
/*******************************/

void TestLib_1::Blink_2(){

 digitalWrite(_pin, HIGH);
  delay(3000);
  digitalWrite(_pin, LOW);
  delay(100);
  Serial.println("Inside function called from libuary! ");
}
/*********************************/
