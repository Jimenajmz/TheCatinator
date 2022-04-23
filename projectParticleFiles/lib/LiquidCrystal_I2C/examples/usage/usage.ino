// Example usage for LiquidCrystal_I2C library by mwah.

#include "LiquidCrystal_I2C.h"

// Initialize objects from the lib
LiquidCrystal_I2C liquidCrystal_I2C;

void setup() {
    // Call functions on initialized library objects that require hardware
    liquidCrystal_I2C.begin();
}

void loop() {
    // Use the library's initialized objects and functions
    liquidCrystal_I2C.process();
}
