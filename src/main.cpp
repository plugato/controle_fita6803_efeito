// #include <FastLED.h>

// // How many leds in your strip?
// #define NUM_LEDS 58

// // For led chips like WS2812, which have a data line, ground, and power, you just
// // need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// // ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
// // Clock pin only needed for SPI based chipsets when not using hardware SPI
// #define DATA_PIN 3
// #define CLOCK_PIN 10

// // Define the array of leds
// CRGB leds[NUM_LEDS];



// void setup() { 
//     // Uncomment/edit one of the following lines for your leds arrangement.
//     // ## Clockless types ##
//     FastLED.addLeds<LPD6803, DATA_PIN, CLOCK_PIN, GRB, DATA_RATE_MHZ(6) >(leds, NUM_LEDS);  // GRB ordering is typical
//     //FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);  // GRB ordering is assumed
//     // FastLED.addLeds<SM16703, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<TM1829, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<TM1812, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<UCS1904, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<UCS2903, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
//     // FastLED.addLeds<WS2852, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
//     // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
//     // FastLED.addLeds<GS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<SK6812, DATA_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
//     // FastLED.addLeds<SK6822, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<APA106, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<PL9823, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<SK6822, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<WS2813, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<WS2811_400, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<GE8822, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<LPD1886, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<LPD1886_8BIT, DATA_PIN, RGB>(leds, NUM_LEDS);
//     // ## Clocked (SPI) types ##
    
//     // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // GRB ordering is typical
//     // FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<WS2803, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
//     // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
//     // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
//     // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
//     // FastLED.addLeds<SK9822, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);  // BGR ordering is typical
// }
// int i = 0;

// // const  int R_COLOR_DEPTH=20;       // valid values btwn 1 and 128   1 = pastel white, 128 is brightly colored 
// // const  int G_COLOR_DEPTH=20;
// // const  int B_COLOR_DEPTH=20;
// // const  int R_OFFSET = 20;
// // const  int  G_OFFSET = 20;
// // const  int  B_OFFSET = 20;
// #define DELAY_SPEED 30     // larger numbers are slower - in mS, change to suit
// const unsigned int COLOR_MAX = NUM_LEDS * 3;      // controls color change speed, change multiplier

// const  int R_COLOR_DEPTH=256;       // valid values btwn 1 and 128   1 = pastel white, 128 is brightly colored 
// const  int G_COLOR_DEPTH=128;
// const  int B_COLOR_DEPTH=150;
 
// const  int R_OFFSET = 128;
// const  int  G_OFFSET = 100;
// const  int  B_OFFSET = 64;

// float sinValX, sinValY, sinValZ, X, Y, Z;    // floats for sine waves
// // void loop() { 
// // //   // Turn the LED on, then pause
// // //   leds[i] = CRGB::BlueViolet;
// // //   FastLED.show();
// // //   delay(50);
// // //   // Now turn the LED off, then pause
// // //   leds[i] = CRGB::AliceBlue;
// // //   FastLED.show();
// // //   delay(50);
// // //   i++; i %= NUM_LEDS;
// // // }

// //     // increment variables - experiment with values!
// //     // really small nummbers can be useful for slow-moving effects
// //     sinValX  += .17;
// //     sinValY  += .2;
// //     sinValZ  += .3;

// //     memset(leds, 0, NUM_LEDS * 3);         // turns off all LEDs
// //     // push data out to LEDs one pixel at a time
// //     for(int i = 0 ; i < NUM_LEDS; i++ ) {

// //         // sin() will return a float between -1 and 1
// //         // The we just have to scale the output to appropriate levels.
// //         // and add an offset to get rid of the negative numbers.

// //         X =  (sin(sinValX + (i * .3)) * R_COLOR_DEPTH) + R_OFFSET;
// //         X = constrain(X, 0, 255);
// //         Y= (sin(sinValY + (i * .2)) * G_COLOR_DEPTH) + G_OFFSET; 
// //         Y = constrain(Y, 0, 255);
// //         Z =  (sin(sinValZ + (i * .1)) * B_COLOR_DEPTH) + B_OFFSET; 
// //         Z = constrain(Z, 0, 255);

// //         leds[i].r = X;
// //         leds[i].g = Y;
// //         leds[i].b = Z;
// //     }
// //     FastSPI_LED.show();
// //     delay(10);     // frame rate delay - OK to change
// // }
// void loop() { 

//     // increment variables - experiment with values!
//     // these values control the speed of color change
//     // very small numbers could be useful (eg .002) coiuld be useful in creating really subtly changing color schemes
//     sinValX  += .03;
//     sinValY  += .045;
//     sinValZ  += .025;

//     memset(leds, 0, NUM_LEDS * 3);         // turns off all LEDs
//     // push data out to LEDs one pixel at a time
//     for(int i = 0 ; i < NUM_LEDS; i++ ) {

//         // sin() will return a float between -1 
//         // just scale to appropriate levels
//         // (i * .3) is the color change per LED change in the string.
//         // Increase the constant for more quickly changing pixels.
//         //  and vice versa. This multiplier
//         // can also be zero for strings of all the same color. Experiment!

//         X =  (sin(sinValX + (i * .07)) * R_COLOR_DEPTH) + R_OFFSET;
//         X = constrain(X, 0, 255);
//         Y= (sin(sinValY + (i * .07)) * G_COLOR_DEPTH) + G_OFFSET; 
//         Y = constrain(Y, 0, 255);
//         Z =  (sin(sinValZ + (i * .061)) * B_COLOR_DEPTH) + B_OFFSET; 
//         Z = constrain(Z, 0, 255);

//         leds[i].r =  X;
//         Serial.println(Z);
//         leds[i].g = Y;
//         leds[i].b = Z;

//     }
//     FastSPI_LED.show();
//     delay(20);
// }

// #include <FastLED.h>
// #define NUM_LEDS 50
// #define DATA_PIN 3
// #define CLOCK_PIN 10
// CRGBArray<NUM_LEDS> leds;

// void setup() { FastLED.addLeds<LPD6803, DATA_PIN, CLOCK_PIN, GRB, DATA_RATE_MHZ(6)>(leds, NUM_LEDS); }

// void loop(){ 
//   static uint8_t hue;
//   for(int i = 0; i < NUM_LEDS/2; i++) {   
//     // fade everything out
//     leds.fadeToBlackBy(40);

//     // let's set an led value
//     leds[i] = CHSV(hue++,255,255);

//     // now, let's first 20 leds to the top 20 leds, 
//     leds(NUM_LEDS/2,NUM_LEDS-1) = leds(NUM_LEDS/2 - 1 ,0);
//     FastLED.delay(33);
//   }
// }
#define FASTLED_ESP8266_RAW_PIN_ORDER
#define FASTLED_ESP8266_NODEMCU_PIN_ORDER
#define FASTLED_ESP8266_D1_PIN_ORDER

#include <FastLED.h>
#define NUM_LEDS 50
#define DATA_PIN D1//3
 #define CLOCK_PIN D2//13
//D1 = GPIO5;
//D2 = GPIO4;
#define COLOR_ORDER GRB
#define NUM_LEDS    50
#define BRIGHTNESS  255

CRGB leds[NUM_LEDS];
CRGBArray<NUM_LEDS> leds2;

void setup() {
  delay(3000); // 3 second delay for recovery
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  // tell FastLED about the LED strip configuration
  FastLED.addLeds<LPD6803, DATA_PIN, CLOCK_PIN, COLOR_ORDER, DATA_RATE_MHZ(12)>(leds, NUM_LEDS)
    .setCorrection(TypicalLEDStrip)
    .setDither(BRIGHTNESS < 255);

  // set master brightness control
  FastLED.setBrightness(BRIGHTNESS);
}



// This function draws rainbows with an ever-changing,
// widely-varying set of parameters.
void pride() 
{
  static uint16_t sPseudotime = 0;
  static uint16_t sLastMillis = 0;
  static uint16_t sHue16 = 0;
 
  uint8_t sat8 = beatsin88( 87, 220, 250);
  uint8_t brightdepth = beatsin88( 341, 96, 224);
  uint16_t brightnessthetainc16 = beatsin88( 203, (25 * 256), (40 * 256));
  uint8_t msmultiplier = beatsin88(147, 23, 60);

  uint16_t hue16 = sHue16;//gHue * 256;
  uint16_t hueinc16 = beatsin88(113, 1, 3000);
  
  uint16_t ms = millis();
  uint16_t deltams = ms - sLastMillis ;
  sLastMillis  = ms;
  sPseudotime += deltams * msmultiplier;
  sHue16 += deltams * beatsin88( 400, 5,9);
  uint16_t brightnesstheta16 = sPseudotime;
  
  for( uint16_t i = 0 ; i < NUM_LEDS; i++) {
    hue16 += hueinc16;
    uint8_t hue8 = hue16 / 256;

    brightnesstheta16  += brightnessthetainc16;
    uint16_t b16 = sin16( brightnesstheta16  ) + 32768;

    uint16_t bri16 = (uint32_t)((uint32_t)b16 * (uint32_t)b16) / 65536;
    uint8_t bri8 = (uint32_t)(((uint32_t)bri16) * brightdepth) / 65536;
    bri8 += (255 - brightdepth);
    
    CRGB newcolor = CHSV( hue8, sat8, bri8);
    
    uint16_t pixelnumber = i;
    pixelnumber = (NUM_LEDS-1) - pixelnumber;
    
    nblend( leds[pixelnumber], newcolor, 64);
  }
}


void fadeback()
{
  static uint8_t hue;
  for(int i = 0; i < NUM_LEDS/2; i++) {   
    // fade everything out
    leds2.fadeToBlackBy(40);

    // let's set an led value
    leds2[i] = CHSV(hue++,255,255);

    // now, let's first 20 leds to the top 20 leds, 
    leds2(NUM_LEDS/2,NUM_LEDS-1) = leds2(NUM_LEDS/2 - 1 ,0);
    FastLED.delay(33);
  }
}
float sinValX, sinValY, sinValZ, X, Y, Z;    // floats for sine waves
void effect2(){

    const  int R_COLOR_DEPTH=256;       // valid values btwn 1 and 128   1 = pastel white, 128 is brightly colored 
    const  int G_COLOR_DEPTH=128;
    const  int B_COLOR_DEPTH=150;
    
    const  int R_OFFSET = 128;
    const  int  G_OFFSET = 100;
    const  int  B_OFFSET = 64;
    // increment variables - experiment with values!
    // these values control the speed of color change
    // very small numbers could be useful (eg .002) coiuld be useful in creating really subtly changing color schemes
    sinValX  += .03;
    sinValY  += .045;
    sinValZ  += .025;

    memset(leds, 0, NUM_LEDS * 3);         // turns off all LEDs
    // push data out to LEDs one pixel at a time
    for(int i = 0 ; i < NUM_LEDS; i++ ) {

        // sin() will return a float between -1 
        // just scale to appropriate levels
        // (i * .3) is the color change per LED change in the string.
        // Increase the constant for more quickly changing pixels.
        //  and vice versa. This multiplier
        // can also be zero for strings of all the same color. Experiment!

        X =  (sin(sinValX + (i * .07)) * R_COLOR_DEPTH) + R_OFFSET;
        X = constrain(X, 0, 255);
        Y= (sin(sinValY + (i * .07)) * G_COLOR_DEPTH) + G_OFFSET; 
        Y = constrain(Y, 0, 255);
        Z =  (sin(sinValZ + (i * .061)) * B_COLOR_DEPTH) + B_OFFSET; 
        Z = constrain(Z, 0, 255);

        leds[i].r =  X;
        Serial.println(Z);
        leds[i].g = Y;
        leds[i].b = Z;

    }
    FastSPI_LED.show();
    delay(20);
}


void loop()
{
  //pride();
   effect2();
  //fadeback();
  //delay(3000);
  FastLED.show();  
}



// #include <FastLED.h>
// #define NUM_LEDS 50
// #define DATA_PIN 3
// #define CLOCK_PIN 10

// FASTLED_USING_NAMESPACE

// CRGB leds[NUM_LEDS];
 

// void setup() {
//   delay( 3000); // 3 second delay for boot recovery, and a moment of silence
//   FastLED.addLeds<LPD6803, DATA_PIN, CLOCK_PIN, GRB, DATA_RATE_MHZ(6)>(leds, NUM_LEDS)
//         .setCorrection( TypicalLEDStrip );
//   FastLED.setMaxPowerInVoltsAndMilliamps( 5, 500);
// }


// CRGBPalette16 pacifica_palette_1 = 
//     { 0x000507, 0x000409, 0x00030B, 0x00030D, 0x000210, 0x000212, 0x000114, 0x000117, 
//       0x000019, 0x00001C, 0x000026, 0x000031, 0x00003B, 0x000046, 0x14554B, 0x28AA50 };
// CRGBPalette16 pacifica_palette_2 = 
//     { 0x000507, 0x000409, 0x00030B, 0x00030D, 0x000210, 0x000212, 0x000114, 0x000117, 
//       0x000019, 0x00001C, 0x000026, 0x000031, 0x00003B, 0x000046, 0x0C5F52, 0x19BE5F };
// CRGBPalette16 pacifica_palette_3 = 
//     { 0x000208, 0x00030E, 0x000514, 0x00061A, 0x000820, 0x000927, 0x000B2D, 0x000C33, 
//       0x000E39, 0x001040, 0x001450, 0x001860, 0x001C70, 0x002080, 0x1040BF, 0x2060FF };


// // Add one layer of waves into the led array
// void pacifica_one_layer( CRGBPalette16& p, uint16_t cistart, uint16_t wavescale, uint8_t bri, uint16_t ioff)
// {
//   uint16_t ci = cistart;
//   uint16_t waveangle = ioff;
//   uint16_t wavescale_half = (wavescale / 2) + 20;
//   for( uint16_t i = 0; i < NUM_LEDS; i++) {
//     waveangle += 250;
//     uint16_t s16 = sin16( waveangle ) + 32768;
//     uint16_t cs = scale16( s16 , wavescale_half ) + wavescale_half;
//     ci += cs;
//     uint16_t sindex16 = sin16( ci) + 32768;
//     uint8_t sindex8 = scale16( sindex16, 240);
//     CRGB c = ColorFromPalette( p, sindex8, bri, LINEARBLEND);
//     leds[i] += c;
//   }
// }
// // Add extra 'white' to areas where the four layers of light have lined up brightly
// void pacifica_add_whitecaps()
// {
//   uint8_t basethreshold = beatsin8( 9, 55, 65);
//   uint8_t wave = beat8( 7 );
  
//   for( uint16_t i = 0; i < NUM_LEDS; i++) {
//     uint8_t threshold = scale8( sin8( wave), 20) + basethreshold;
//     wave += 7;
//     uint8_t l = leds[i].getAverageLight();
//     if( l > threshold) {
//       uint8_t overage = l - threshold;
//       uint8_t overage2 = qadd8( overage, overage);
//       leds[i] += CRGB( overage, overage2, qadd8( overage2, overage2));
//     }
//   }
// }

// // Deepen the blues and greens
// void pacifica_deepen_colors()
// {
//   for( uint16_t i = 0; i < NUM_LEDS; i++) {
//     leds[i].blue = scale8( leds[i].blue,  145); 
//     leds[i].green= scale8( leds[i].green, 200); 
//     leds[i] |= CRGB( 2, 5, 7);
//   }
// }
// void pacifica_loop()
// {
//   // Increment the four "color index start" counters, one for each wave layer.
//   // Each is incremented at a different speed, and the speeds vary over time.
//   static uint16_t sCIStart1, sCIStart2, sCIStart3, sCIStart4;
//   static uint32_t sLastms = 0;
//   uint32_t ms = GET_MILLIS();
//   uint32_t deltams = ms - sLastms;
//   sLastms = ms;
//   uint16_t speedfactor1 = beatsin16(3, 179, 269);
//   uint16_t speedfactor2 = beatsin16(4, 179, 269);
//   uint32_t deltams1 = (deltams * speedfactor1) / 256;
//   uint32_t deltams2 = (deltams * speedfactor2) / 256;
//   uint32_t deltams21 = (deltams1 + deltams2) / 2;
//   sCIStart1 += (deltams1 * beatsin88(1011,10,13));
//   sCIStart2 -= (deltams21 * beatsin88(777,8,11));
//   sCIStart3 -= (deltams1 * beatsin88(501,5,7));
//   sCIStart4 -= (deltams2 * beatsin88(257,4,6));

//   // Clear out the LED array to a dim background blue-green
//   fill_solid( leds, NUM_LEDS, CRGB( 2, 6, 10));

//   // Render each of four layers, with different scales and speeds, that vary over time
//   pacifica_one_layer( pacifica_palette_1, sCIStart1, beatsin16( 3, 11 * 256, 14 * 256), beatsin8( 10, 70, 130), 0-beat16( 301) );
//   pacifica_one_layer( pacifica_palette_2, sCIStart2, beatsin16( 4,  6 * 256,  9 * 256), beatsin8( 17, 40,  80), beat16( 401) );
//   pacifica_one_layer( pacifica_palette_3, sCIStart3, 6 * 256, beatsin8( 9, 10,38), 0-beat16(503));
//   pacifica_one_layer( pacifica_palette_3, sCIStart4, 5 * 256, beatsin8( 8, 10,28), beat16(601));

//   // Add brighter 'whitecaps' where the waves lines up more
//   pacifica_add_whitecaps();

//   // Deepen the blues and greens a bit
//   pacifica_deepen_colors();
// }






// void loop()
// {
//   EVERY_N_MILLISECONDS( 20) {
//     pacifica_loop();
//     FastLED.show();
//   }
// } 
