#include "light_utils.h"
#include "matrix.h"
#include "settings.h"

/* Update ticks based on profile settings */
static inline void updateAnimationSpeed(void) {
  animationSkipTicks = profiles[currentProfile].animationSpeed[currentSpeed];
  animationTicks = 0;
}

/*
 * STATIC
 */
void colorBleed(led_t *currentKeyLedColors);
void red(led_t *currentKeyLedColors);
void green(led_t *currentKeyLedColors);
void blue(led_t *currentKeyLedColors);
void white(led_t *currentKeyLedColors);
void rainbowHorizontal(led_t *currentKeyLedColors);
void rainbowVertical(led_t *currentKeyLedColors);
void miamiNights(led_t *currentKeyLedColors);
void colorBlank(led_t *currentKeyLedColors);

/*
 * ANIMATED
 */
void animatedRainbowVertical(led_t *currentKeyLedColors);
void animatedRainbowFlow(led_t *currentKeyLedColors);
void animatedRainbowWaterfall(led_t *currentKeyLedColors);
void animatedBreathing(led_t *currentKeyLedColors);
void animatedSpectrum(led_t *currentKeyLedColors);
void animatedWave(led_t *currentKeyLedColors);

/*
 * ANIMATED - responding to key presses
 */
void reactiveFade(led_t *ledColors);
void reactiveFadeKeypress(led_t *ledColors, uint8_t row, uint8_t col);
void reactiveFadeInit(led_t *ledColors);

void reactivePulse(led_t *ledColors);
void reactivePulseKeypress(led_t *ledColors, uint8_t row, uint8_t col);
void reactivePulseInit(led_t *ledColors);

void reactiveTerm(led_t *ledColors);
void reactiveTermKeypress(led_t *ledColors, uint8_t row, uint8_t col);
void reactiveTermInit(led_t *ledColors);
