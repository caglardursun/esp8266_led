#include <Arduino.h>
#include "ledlight.h"

LedLight ledLight;

void setup() {
 ledLight.Setup();
 Serial.begin(115200);    
}

void loop() 
{
    Serial.println("Please Enter A Number\nThe Color Numbers Are Red: 1 , Green :2, Blue : 3\n");
    while (Serial.available() == 0) {}     //wait for data available
    String readedValue = Serial.readString();  
    Serial.print("You have printed : ");
    Serial.print(readedValue);
    Serial.println("");

    int value = readedValue.toInt();
    if (value > 0 && value < 124)
    {
      ledLight.TurnOn((Colors) value) ;  
    }else{
      Serial.println("Please enter a valid number again\n");
    }      
}

