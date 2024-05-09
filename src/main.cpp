#include <Arduino.h>
#include <WiFiManager.h> 

WiFiManager wifiManager;

void setup() {
    Serial.begin(115200);
    wifiManager.autoConnect();

}

void loop() {
    // put your main code here, to run repeatedly:   
}