#pragma once

enum Colors{
  Red = 1,
  Green = 2,
  Blue = 3,
  RedGreen = 12,
  RedBlue = 13,
  GreenBlue = 23,
  White = 123
};

class LedLight
{
  private:    
      int RED_PIN;
      int GREEN_PIN;
      int BLUE_PIN;
      static const int DELAY = 2000;
  public:
      LedLight(/* args */);
      void Setup();    
      void TurnOn(Colors color);
      void TurnOff();
      ~LedLight();
};
