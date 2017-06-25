#include <Button.h>
#include <Motor.h>

Motor* motor1 = new Motor(12, 13, 9);
Button* button1 = new Button(7);
Button* button2 = new Button(11);

void setup() {  
  motor1->inicializaPinos();
}

void loop() {
  motor1->controla_motor(button1, button2);               
}
