#include "FlipUpCommand.h"
#include "Light.h"

FlipUpCommand::FlipUpCommand(Light &light) : theLight(light) {
}

void FlipUpCommand::execute() {
    theLight.turnOn();
}
