//ojective= a .cpp file with function definitions of a .h file
//i.e tomato_1.cpp of a tomato_1.h 
/*
*
*
*/

// TestLibuary.h

#ifndef TestLibuary_h
#define TestLibuary_h


#if (ARDUINO >=100) //this always comes before the class definition

    #include "Arduino.h"
    
# else 
#include "WProgram.h"//this is only useful when i used a different IDE to class the libuary 
#endif

class TestLib_1

{  
public: 
TestLib_1(int pin); //constructor

void PrintText();
void Blink_2();

private:
int _pin;//useful if i have multiple devices running the same code with different variables
//by making the variable private if it changes in one instance of the class it doesn't affect the rest 
};
 

#endif 
