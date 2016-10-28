#include <Led.h>

Led led = Led(11);
Led led2 = Led(3);

void setup() {
  pinMode(led.getPorta, OUTPUT);
  pinMode(led2.getPorta, OUTPUT);
}

void loop() {
  led.acender();
  delay(100);
  led.apagar();
  delay(100);
  led.inverter();
  delay(100);
  led.piscar(10, 5000);
}
