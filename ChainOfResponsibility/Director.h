#ifndef DIRECTOR_H
#define DIRECTOR_H

#include "Handler.h"

class Director : public Handler {
  public:
    Director();
    ~Director();

    virtual void handleRequest(double days) override;
};

#endif  // DIRECTOR_H
