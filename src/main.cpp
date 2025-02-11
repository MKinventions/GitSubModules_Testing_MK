#include <Arduino.h>
#include <ArduinoJson.h>  // Include from submodule
#include "led.h"

LED led(13);

void setup() {
    Serial.begin(9600);
    JsonDocument doc;
    doc["message"] = "Hello, Git Submodule!";
    serializeJson(doc, Serial);
}

void loop() {

    led.blink(500);
}