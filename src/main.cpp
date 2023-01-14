#include <Arduino.h>
#include <WiFi.h>
#include "get_mac.hpp"

void setup()
{
    Serial.begin(115200);
    Serial.println("Hello world!");
    Serial.print("ESP Board MAC Address:  ");
    Serial.println(get_macaddress());
}

void loop()
{
    
}