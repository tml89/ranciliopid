/**
 * @file pinmapping.h
 *
 * @brief Default GPIO pin mapping
 *
 */

#pragma once

/**
 * Input Pins
 */

// Switches/Buttons
#define PIN_POWERSWITCH 39
#define PIN_BREWSWITCH 34
#define PIN_STEAMSWITCH 35

#define PIN_ENCODERLEFT 4       // Rotary encoder left
#define PIN_ENCODERRIGHT 5      // Rotary encoder right
#define PIN_ENCODERBUTTON 3     // Rotary encoder pushbutton

// Sensors
#define PIN_TEMPSENSOR 16
#define PIN_PRESSURESENSOR 23
#define PIN_WATERSENSOR 36
#define PIN_FLOWSENSOR 1
#define PIN_HXDAT 32            // Brew scale data pin
#define PIN_HXCLK 33            // Brew scale clock pin


/**
 * Output pins
 */

// Relays
#define PIN_VALVE 17
#define PIN_PUMP 27
#define PIN_HEATER 2

// LEDs
#define PIN_STATUSLED 26

// Periphery
#define PIN_ZC 18               // Dimmer circuit Zero Crossing
#define PIN_PSM 19              // Dimmer circuit PSM
#define PIN_ROTARY_DT 3         // Rotary encoder data pin
#define PIN_ROTARY_CLK 4        // Rotary encoder clock pin
#define PIN_ROTARY_SW 5         // Rotary encoder switch


/**
 * Bidirectional Pins
 */
#define PIN_I2CSCL 22
#define PIN_I2CSDA 21
