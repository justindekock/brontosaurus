#include "rgb.h"
#include <Arduino.h>

RGB::RGB(int rPin, int gPin, int bPin) {
    this->rPin = rPin;
    this->gPin = gPin;
    this->bPin = bPin;
}

void RGB::init() {
    for (int pin : rgbPins) {
        pinMode(pin, OUTPUT);
    }
}

void RGB::off() {
    for (int pin : rgbPins) {
        digitalWrite(pin, LOW);
    }
}

void RGB::red() {
    analogWrite(rPin, 255);
    analogWrite(gPin, 0);
    analogWrite(bPin, 0);
}

void RGB::grn() {
    analogWrite(rPin, 0);
    analogWrite(gPin, 255);
    analogWrite(bPin, 0);
}

void RGB::blu() {
    analogWrite(rPin, 0);
    analogWrite(gPin, 0);
    analogWrite(bPin, 255);
}

// pass three values 0-255 to turn on RGB
void RGB::on(int rVal, int gVal, int bVal) {
    analogWrite(rPin, rVal);
    analogWrite(gPin, gVal);
    analogWrite(bPin, bVal);
}
