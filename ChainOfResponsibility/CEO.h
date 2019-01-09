#ifndef CEO_H
#define CEO_H

#include "Handler.h"

class CEO : public Handler {
  public:
    CEO();
    ~CEO();

    virtual void handleRequest(double days) override;
};

#endif  // CEO_H
