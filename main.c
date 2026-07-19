// Pico SDK
#include "pico/stdlib.h"
#include "hardware/adc.h"

// Standard
#include <stdio.h>

// Pins
#define THUMBSTICK_X_PIN 27
#define THUMBSTICK_Y_PIN 26
#define THUMBSTICK_S_PIN 22

int main() {
    // Initialize
    stdio_init_all();
    adc_init();

    // Set thumbstick pins
    adc_gpio_init(THUMBSTICK_X_PIN);
    adc_gpio_init(THUMBSTICK_Y_PIN);
    gpio_init(THUMBSTICK_S_PIN);
    gpio_set_dir(THUMBSTICK_S_PIN, GPIO_IN);
    gpio_pull_up(THUMBSTICK_S_PIN);

    // Game loop
    while (true) {
        // Collect axis information
        adc_select_input(0);
        uint16_t x_raw = adc_read();
        adc_select_input(1);
        uint16_t y_raw = adc_read();

        // Detect switch press
        bool s_raw = !gpio_get(THUMBSTICK_S_PIN);

        printf("X: %u Y: %u S: %d\n", x_raw, y_raw, s_raw);

        sleep_ms(200);
    }
}
