#include "FastLED.h"

#define NUM_LEDS 10
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

  // delay(1000);
  // leds[0] = CRGB(255,0,0);
  // caliberate();
  glow(127, 0, 0);
  // delay(1000);
  // for(int i = 0; i <= 6; i++)
  //     leds[i] = CRGB(0, 0, 0);
  // FastLED.clear();
  // FastLED.show();
  // delay(1000);
}

void caliberate()
{
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
}

void glow(int r, int g, int b){
  for (int i=0; i < 64; i++)
  {
    FastLED.setBrightness(i);
    fill_solid( leds, NUM_LEDS, CRGB( r, g, b));
    FastLED.show();
    delay(20);
  }
  for (int i=64; i > 0; i--)
  {
    FastLED.setBrightness(i);
    fill_solid( leds, NUM_LEDS, CRGB( r, g, b));
    FastLED.show();
    delay(60);
  }
}
