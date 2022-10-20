#include "ledlight.h"
#include <Arduino.h>


LedLight::LedLight(/* args */)
{
    RED_PIN = 4;
    GREEN_PIN = 5;
    BLUE_PIN = 16;
}

LedLight::~LedLight()
{
}

void LedLight ::Setup(){
   pinMode(BLUE_PIN,HIGH); // Blue led Pin Connected 2 D0    
   pinMode(GREEN_PIN,HIGH);  // Green Led Pin Connected 2 D1    
   pinMode(RED_PIN,HIGH);  // Red Led Connected 2 D2      
}

void LedLight::TurnOn(Colors color)
{
    Serial.print("The number is : ");
    Serial.print((int) color);
    Serial.println("");

    switch(color){
        case Colors::Red:
          digitalWrite(RED_PIN,HIGH);  
          digitalWrite(GREEN_PIN,LOW);    
          digitalWrite(BLUE_PIN,LOW);    
          Serial.println("RED_PIN triggered");
          delay(1000);    
        break;
        case Colors::Green:
             digitalWrite(RED_PIN,LOW); 
             digitalWrite(GREEN_PIN,HIGH);    
             digitalWrite(BLUE_PIN,LOW);    
             Serial.println("GREEN_PIN triggered");
             delay(1000);    
        break;
        case Colors::Blue:
          digitalWrite(RED_PIN,LOW);  
          digitalWrite(GREEN_PIN,LOW); 
          digitalWrite(BLUE_PIN,HIGH);    
          Serial.println("BLUE_PIN triggered");
          delay(1000);    
        break;
        case Colors::RedGreen:
            digitalWrite(RED_PIN,HIGH);  
            digitalWrite(GREEN_PIN,HIGH);    
            digitalWrite(BLUE_PIN,LOW);    
            Serial.println("RED_PIN and GREEN_PIN triggered");
            delay(1000); 
        break;
        case Colors::RedBlue:
            digitalWrite(RED_PIN,HIGH);  
            digitalWrite(GREEN_PIN,LOW);    
            digitalWrite(BLUE_PIN,HIGH);    
            Serial.println("RED_PIN and BLUE_PIN triggered");
            delay(1000); 
        break;
        case Colors::GreenBlue:
           digitalWrite(RED_PIN,LOW);  
            digitalWrite(GREEN_PIN,HIGH);    
            digitalWrite(BLUE_PIN,HIGH);    
            Serial.println("RED_PIN and BLUE_PIN triggered");
            delay(1000); 
        break;
        case Colors::White:
          digitalWrite(RED_PIN,HIGH);  
          digitalWrite(GREEN_PIN,HIGH);    
          digitalWrite(BLUE_PIN,HIGH);    
          Serial.println("White is triggered");
          delay(1000); 
        break;
        default:
          Serial.println("Invalid Color");
        break;        
    }

    TurnOff();
}

void LedLight::TurnOff(){
        digitalWrite(RED_PIN,LOW);  //B
        digitalWrite(GREEN_PIN,LOW);    //G
        digitalWrite(BLUE_PIN,LOW); 
        Serial.println("Lights are turned off");
}