#include <Arduino.h>
#include <ArduinoJson.h>  // Include from submodule

void setup() {
    Serial.begin(9600);
    StaticJsonDocument<200> doc;
    doc["message"] = "Hello, Git Submodule!";
    serializeJson(doc, Serial);
}

void loop() {
}