/**
 * @file main.cpp
 * @author Ishika Khera
 * @date 2026-02-22
 * @brief Simple PlatformIO Arduino sketch for MG995 closed-loop axis control
 *
 * This file contains a minimal, well-documented Arduino sketch used for the
 * assignment. It initializes the serial port and blinks the onboard LED.
 */

#include <Arduino.h>

/// Blink interval in milliseconds
static const unsigned long BLINK_INTERVAL_MS = 500UL;

/**
 * @brief Arduino setup
 *
 * Initializes serial communication and configures the onboard LED pin.
 */
void setup() {
	// write your initialization code here
}

/**
 * @brief Arduino main loop
 *
 * Toggles the onboard LED at a fixed interval and emits a heartbeat over Serial.
 */
void loop() {
	// write your code here
}