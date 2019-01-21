#include <iostream>

#include "Light.h"

Light::Light() {
}

void Light::turnOn() {
    std::cout << "The light is on" << std::endl;
}

void Light::turnOff() {
    std::cout << "The light is off" << std::endl;
}
