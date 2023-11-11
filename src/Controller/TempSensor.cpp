/*
    TempSensor.cpp
    Class method definitions for TMP36 Temperature sensors.
    
    :authors: Neko'z
    :date: November 11, 2023
*/

#include "TempSensor.h"

TempSensor::TempSensor(int pin) {
    this->_Pin = pin;
}

void TempSensor::init() {
    pinMode(this->_Pin, INPUT);
}

float TempSensor::get() {
    int raw = analogRead(this->_Pin);
    float voltage = raw * 5.0 / 1024.0;
    float tempC = (voltage - 0.5) * 100;
    float tempF = tempC * 9.0 / 5.0 + 32.0;
    return tempF;
}
