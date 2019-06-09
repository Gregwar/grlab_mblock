#include <Arduino.h>
#include <Wire.h>
#include <SoftwareSerial.h>


#include "SparkFunLSM6DS3.h"

double angle_rad = PI/180.0;
double angle_deg = 180.0/PI;
LSM6DS3 myIMU( 0x6A );



void setup(){
     myIMU.begin();
    Serial.begin(115200);
    myIMU.tareGyroZ();myIMU.resetGyroZ();
}

void loop(){
    
    Serial.println(myIMU.readGyroZ());
    
    _loop();
}

void _delay(float seconds){
    long endTime = millis() + seconds * 1000;
    while(millis() < endTime)_loop();
}

void _loop(){
    
}
