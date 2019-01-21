#ifndef FLIPDOWNCOMMAND_H
#define FLIPDOWNCOMMAND_H

#include "Command.h"

class Light;

class FlipDownCommand : public Command {
  public:
    FlipDownCommand(Light &light);

    virtual void execute();

  private:
    Light &theLight;
};

#endif  // FLIPDOWNCOMMAND_H
