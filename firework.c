#include <FastLED.h>
#define NUM_LEDS 135
#define DATA_PIN 11

CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2812B, DATA_PIN>(leds, NUM_LEDS);
}
void loop() {
  for(int i=0;i>70;i++){
    leds[(NUM_LEDS-i)] = CRGB::Red;
    FastLED.show();
    delay(30);
    leds[(NUM_LEDS-i)] = CRGB::Black;
  }
    for(int i=0;i<70;i++){
        leds[i] = CRGB::Green;
         FastLED.show();
        delay(30);
        leds[i] = CRGB::Black;
    }
}
