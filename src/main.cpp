#include <Arduino.h>
#include "ledlight.h"
#include "screen.h"

IICScreen* screen;

void setup() {
    
  // text display tests
 Serial.begin(9600);
 screen = new IICScreen();

}
int loop_count =1;
void loop() 
{
    String msg = String("Test case : ") +loop_count + String("");
    screen->Print(msg);
    loop_count++;
    delay(100);
    // Serial.println("Please Enter A Number\nThe Color Numbers Are Red: 1 , Green :2, Blue : 3\n");
    // while (Serial.available() == 0) {}     //wait for data available
    // String readedValue = Serial.readString();  
    // Serial.print("You have printed : ");
    // Serial.print(readedValue);
    // Serial.println("");

    // int value = readedValue.toInt();
    // if (value > 0 && value < 124)
    // {
    //   ledLight.TurnOn((Colors) value) ;  
    // }else{
    //   Serial.println("Please enter a valid number again\n");
    // }      
}

