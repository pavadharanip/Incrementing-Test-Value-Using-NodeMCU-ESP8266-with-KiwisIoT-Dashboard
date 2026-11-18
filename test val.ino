#include <ESP8266WiFi.h>
#include <KiwisIoT.h>

// WiFi credentials
const char* ssid = "lapptt";
const char* pass = "oppof298";

// KiwisIoT Topic ID
const char* topic = "dash_1794813302537";

// Create KiwisIoT object
KiwisIoT kiwisiot(ssid, pass, topic);

int testValue = 1;

void setup() {
  Serial.begin(115200);

  Serial.println();
  Serial.println("ESP8266 IoT Connection");

  kiwisiot.begin();

  Serial.println("KiwisIoT Initialized");
}

void loop() {

  // Maintain KiwisIoT connection
  kiwisiot.run();

  // Send number to Channel 1
  kiwisiot.send("0", testValue);

  Serial.print("Data sent to KiwisIoT: ");
  Serial.println(testValue);

  // Increment number
  testValue++;

  // Reset after 18
  if (testValue > 18) {
    testValue = 1;
  }

  delay(3000);
}
