#include <ESP8266WiFi.h>
#include <WiFiClient.h>
#include <ESP8266WebServer.h>

#define pathToLightSwitchHttp "/light_switch"
#define pathToModeSwitchHttp "/mode_switch"
#define pathToBrightnessHttp "/brightness"

#define HTTP_PORT 10200

#define INITIAL_DELAY 3000

#define ATTEMPT_DURATION 30000

const char *ssid = "REPLACE_WITH_YOUR_NETWORK_NAME";
const char *password = "REPLACE_WITH_YOUR_NETWORK_PASSWORD";