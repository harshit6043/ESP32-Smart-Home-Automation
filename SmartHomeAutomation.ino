
#define BLYNK_TEMPLATE_ID "_TEMPLATE_ID"
#define BLYNK_TEMPLATE_NAME "Smart Home Automation"
#define BLYNK_AUTH_TOKEN "_AUTH_TOKEN"

#define BLYNK_PRINT Serial

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "WIFI_NAME";
char pass[] = "_WIFI_PASSWORD";

const int relayPins[8] = {
  13, 14, 16, 17, 18, 19, 21, 22
};

// Typical active-LOW relay board
const int RELAY_ON = LOW;
const int RELAY_OFF = HIGH;

void setRelay(int channel, int state) {
  if (channel < 0 || channel >= 8) return;

  digitalWrite(
    relayPins[channel],
    state ? RELAY_ON : RELAY_OFF
  );

  Serial.printf(
    "Relay %d: %s\n",
    channel + 1,
    state ? "ON" : "OFF"
  );
}

BLYNK_WRITE(V0) { setRelay(0, param.asInt()); }
BLYNK_WRITE(V1) { setRelay(1, param.asInt()); }
BLYNK_WRITE(V2) { setRelay(2, param.asInt()); }
BLYNK_WRITE(V3) { setRelay(3, param.asInt()); }
BLYNK_WRITE(V4) { setRelay(4, param.asInt()); }
BLYNK_WRITE(V5) { setRelay(5, param.asInt()); }
BLYNK_WRITE(V6) { setRelay(6, param.asInt()); }
BLYNK_WRITE(V7) { setRelay(7, param.asInt()); }

BLYNK_CONNECTED() {
  Blynk.syncVirtual(
    V0, V1, V2, V3, V4, V5, V6, V7
  );
}

void setup() {
  Serial.begin(115200);

  for (int i = 0; i < 8; i++) {
    digitalWrite(relayPins[i], RELAY_OFF);
    pinMode(relayPins[i], OUTPUT);
  }

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
