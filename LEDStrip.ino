#include "FastLED.h"

#define NUM_LEDS 60
#define DATA_PIN 6
#define MAX_POWER_MILLIAMPS 500
#define LED_TYPE WS2812B
#define COLOR_ORDER GRB

CRGB leds[NUM_LEDS];

void setup()
{
  // FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
  FastLED.addLeds<LED_TYPE, DATA_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
  FastLED.setMaxPowerInVoltsAndMilliamps( 5, MAX_POWER_MILLIAMPS);
  FastLED.setBrightness(32);
}

void loop() {
  // fill_solid( leds, NUM_LEDS, CRGB( 10, 20, 10));
  FastLED.show();
  delay(1000);
  // leds[0] = CRGB(255,0,0);
  leds[0] = CRGB::Red;
  FastLED.show();
  delay(100);
  leds[1] = CRGB(0,255,0);
  FastLED.show();
  delay(100);
  leds[2] = CRGB(0,255,0);
  FastLED.show();
  delay(100);
  leds[3] = CRGB(0,0,255);
  FastLED.show();
  delay(100);
  leds[4] = CRGB(0,0,255);
  FastLED.show();
  delay(100);
  leds[5] = CRGB(0,0,255);
  FastLED.show();
  delay(100);
  leds[6] = CRGB(0,0,0);
  FastLED.show();
  delay(1000);
  // for(int i = 0; i <= 6; i++)
  //     leds[i] = CRGB(0, 0, 0);
  FastLED.clear();
  FastLED.show();
  delay(1000);
}