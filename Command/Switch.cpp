#include "Switch.h"
#include "FlipDownCommand.h"
#include "FlipUpCommand.h"

Switch::Switch(Command &flipUpCmd, Command &flipDownCmd) : flipUpCommand(flipUpCmd), flipDownCommand(flipDownCmd) {
}

void Switch::flipUp() {
    flipUpCommand.execute();
}

void Switch::flipDown() {
    flipDownCommand.execute();
}
