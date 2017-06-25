//by Victor Mathias Israel
#ifndef Motor_h
#define Motor_h
#include "Button.h"
class Motor{
  private:
  	int _pinInput1;
  	int _pinInput2;
  	int _pinEnable;//1;
 	int _velocidadeMotor = 15;
  	bool _sentido;
  public: 
  Motor(int pinInput1, int pinInput2, int pinEnable ); 
  void setMotor(bool sentido, int velocidadeMotor);
  void controla_motor(Button* button1, Button* button2);
  void inicializaPinos();
};
#endif
