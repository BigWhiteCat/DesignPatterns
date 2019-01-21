#ifndef FLIPUPCOMMAND_H
#define FLIPUPCOMMAND_H

#include "Command.h"

class Light;

class FlipUpCommand : public Command {
  public:
    FlipUpCommand(Light &light);

    virtual void execute();

  private:
    Light &theLight;
};

#endif  // FLIPUPCOMMAND_H
