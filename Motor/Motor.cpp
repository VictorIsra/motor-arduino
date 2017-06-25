//by Victor Mathias Israel
#include "Motor.h"
#include "Arduino.h"
#include "Button.h"

  Motor::Motor(int pinInput1, int pinInput2, int pinEnable ){
	
    _pinInput1 = pinInput1;  
    _pinInput2 = pinInput2;  
    _pinEnable = pinEnable;  
    inicializaPinos();
  }
   void Motor::setMotor(bool sentido, int velocidadeMotor){
    analogWrite(_pinEnable, velocidadeMotor);
    digitalWrite( _pinInput1 , sentido);
    digitalWrite( _pinInput2 , !sentido);
 }
 
  void Motor::controla_motor(Button* button1, Button* button2){
    _velocidadeMotor = 15;
    if( button1->checa_status() == HIGH && button2->checa_status() == HIGH){  
      _velocidadeMotor = 0;
      setMotor(_sentido,  _velocidadeMotor);
    }     
    if(button1->checa_status() == HIGH){
        _sentido = false;
      setMotor( _sentido,   _velocidadeMotor);  
    } 
     else if ( button2->checa_status() == HIGH){
        _sentido = true;
       setMotor( _sentido,   _velocidadeMotor);
     }
     else{
       _velocidadeMotor = 0;
      setMotor( _sentido,   _velocidadeMotor);
    }
  }
  void Motor::inicializaPinos(){
 	pinMode( _pinInput1, OUTPUT);
	pinMode( _pinInput2, OUTPUT);
	pinMode( _pinEnable, OUTPUT);
  }

