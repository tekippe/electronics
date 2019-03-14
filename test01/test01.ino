#include <Multiplexer.h>
#include <Fat16.h>
#include <ArduinoRobot.h>
#include <Fat16Config.h>
#include <Arduino_LCD.h>
#include <SquawkSD.h>
#include <EasyTransfer2.h>
#include <Fat16mainpage.h>
#include <SdCard.h>
#include <SdInfo.h>
#include <Compass.h>
#include <Squawk.h>
#include <EEPROM_I2C.h>
#include <Fat16util.h>
#include <FatStructs.h>

int ledPin = 9;

void setup(){
  Serial.begin(9600);
}

void loop(){
  Serial.println("Hello World");
}
