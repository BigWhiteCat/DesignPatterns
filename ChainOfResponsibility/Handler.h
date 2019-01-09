#ifndef HANDLER_H
#define HANDLER_H

class Handler {
  public:
    Handler();
    virtual ~Handler();
    void setSuccessor(Handler *successor);
    virtual void handleRequest(double days) = 0;

  protected:
    Handler *ptrSuccessor;
};

#endif  // HANDLER_H
