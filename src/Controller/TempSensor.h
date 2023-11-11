/*
    TempSensor.cpp
    Class prototype for TMP36 Temperature sensors.
    
    :version: 1.0
    :organization: University of North Dakota Advanced Rocketry Club
    :address: 
    :authors: Neko'z
    :date: November 11, 2023
*/

#ifndef TEMP_SENSOR_H
#define TEMP_SENSOR_H

#include "Arduino.h"

class TempSensor {
    public:
        TempSensor(int pin);
        void init();
        float get();
    private:
        int _Pin;
};

#endif /* TEMP_SENSOR_H */
