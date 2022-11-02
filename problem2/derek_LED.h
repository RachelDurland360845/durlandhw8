//derek_LED.h
//class for controling user LED's on BBB

#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

#ifndef DEREK_LED_H
#define DEREK_LED_H
//#define LED_PATH "/sys/class/leds/beaglebone:green:usr"

class LED{
   private:
         string path;
         int number;
         virtual void writeLED(string filename, string value);
         virtual void removeTrigger();
   public:
         LED(int number);
  	 virtual void turnOn();
         virtual void turnOff();
         virtual void flash(string delayms);
         virtual void outputState();
         virtual ~LED();
	 virtual void blink(int num);
};

#endif
