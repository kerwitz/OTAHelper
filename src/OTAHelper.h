/**
 * A simple wrapper around ArduinoOTA to reduce individual project code.
 * 
 */
#pragma once

#include <ArduinoOTA.h>

class OTAHelper {
    public:
        OTAHelper(const char * deviceName);
        void handle();
        void setup();
        
    private:
        const char * _deviceName;
        void _initOTA();
};