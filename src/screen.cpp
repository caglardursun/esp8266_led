#include "screen.h"

IICScreen::IICScreen(/* args */)
{
    Serial.begin(9600); 
    delay(250); // wait for the OLED to power up
    display.begin(i2c_Address, true); // Address 0x3C default
    //display.setContrast (0); // dim display    
    //display.display();
    delay(250);

   display.clearDisplay();
  
        // Draw bitmap on the screen
    display.drawBitmap(0, 0, epd_bitmap_ada, 128, 64, 1);
    display.display();
    delay(1000);
}

IICScreen::~IICScreen()
{
}

void IICScreen::Print(String msg)
{
   display.clearDisplay();
   delay(250);
   display.setTextSize(1);   
   display.setCursor(0, 0);   
   display.setTextColor(SH110X_BLACK, SH110X_WHITE); // 'inverted' text
   display.setTextSize(1);
   display.print(msg);
   display.display();
   delay(250);   
   display.clearDisplay();
   delay(250);   
}

void IICScreen::Print(int number)
{

}