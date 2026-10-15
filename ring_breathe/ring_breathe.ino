#include <Adafruit_NeoPixel.h>

#define LED_PIN    6
#define LED_COUNT 16

Adafruit_NeoPixel ring(LED_COUNT, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  ring.begin();
  ring.show();
  ring.setBrightness(0);
}

void loop() {
  for(int i = 0; i < 20; i++){
    ring.setBrightness(i);
    ring.fill(ring.Color(255,0,0));
    ring.show();
    delay(50);
  }
  for(int i = 20; i >= 0; i--){
    ring.setBrightness(i);
    ring.fill(ring.Color(255,0,0));
    ring.show();
    delay(50);
  }
}
