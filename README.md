# ESP_Project_no_websocket

Control LED Strip from your server

specs:
- strip WS2812B
- main board: ESP 12-E

connections:
- led data wire -> D4 (with 200 Ohm resistor)
- shared ground with DC and ESP
- capacitor 1000uF on gnd-vcc (led strip)
- capacitor 100uF on gnd-3v (esp)

dependencies:
- PlatformIO
- FastLED

configure:
- go to include/wifisettings.h
- change ssid and password to network name and password
