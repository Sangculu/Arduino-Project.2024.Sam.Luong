// if define and endif is used to create a header
#ifndef LED_H
#define LED_H
class Led
{
  private:
  	byte pin;
  public:
  Led() {} //do not use
  
  Led(byte pin)
  {
  	this->pin = pin;
  }
  void init()
  {
    pinMode(pin, OUTPUT);
  }
  void init(byte defaultState)
  {
    init();
    if (defaultState == HIGH) {
      on();
    }
    else {
      off();
    }
  }  
  void on()
  {
    digitalWrite(pin, HIGH);
  }
  void off()
  {
    digitalWrite(pin, LOW);
  }
};

#endif