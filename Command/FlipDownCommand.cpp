#include "FlipDownCommand.h"
#include "Light.h"

FlipDownCommand::FlipDownCommand(Light &light) : theLight(light) {
}

void FlipDownCommand::execute() {
    theLight.turnOff();
}
