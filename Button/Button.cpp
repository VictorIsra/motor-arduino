//by Victor Mathias Israel
#include "Button.h"
#include "Arduino.h"

  Button::Button(int pinSignal){
    _pinSignal = pinSignal;
    pinMode(_pinSignal, INPUT);
  }
   int Button::checa_status(){
    return digitalRead(_pinSignal);  
  }
  
