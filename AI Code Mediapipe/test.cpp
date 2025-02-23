

#include <FastLED.h>
#include <Arduino.h>

#define LED_PIN     18
#define NUM_LEDS    144
//#define BRIGHTNESS  64
#define LED_TYPE    WS2811
#define COLOR_ORDER GRB
CRGB leds[NUM_LEDS];

#define UPDATES_PER_SECOND 100

void setup() {
    delay( 3000 ); // power-up safety delay
    FastLED.addLeds<LED_TYPE, LED_PIN, COLOR_ORDER>(leds, NUM_LEDS).setCorrection( TypicalLEDStrip );
    //FastLED.setBrightness(  BRIGHTNESS );
    
}


void loop()
{

  for (int brightness = 0; brightness <= 255; brightness++) {
        FastLED.setBrightness(brightness);
        for (int i = 0; i < NUM_LEDS; i++) {
            leds[i] = CRGB::Red;
        }
        FastLED.show();
        FastLED.delay(10); // Adjust delay as needed
    }
}

