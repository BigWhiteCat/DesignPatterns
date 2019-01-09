#ifndef MANAGER_H
#define MANAGER_H

#include "Handler.h"

class Manager : public Handler {
  public:
    Manager();
    ~Manager();

    virtual void handleRequest(double days) override;
};

#endif  // MANAGER_H
