#include <iostream>

#include "FlipDownCommand.h"
#include "FlipUpCommand.h"
#include "Light.h"
#include "Switch.h"

int main() {
    Light lamp;
    FlipUpCommand switchUp(lamp);
    FlipDownCommand switchDown(lamp);

    Switch s(switchUp, switchDown);
    s.flipUp();
    s.flipDown();

    return 0;
}
