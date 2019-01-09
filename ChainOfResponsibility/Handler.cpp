#include "Handler.h"

Handler::Handler() {
    ptrSuccessor = nullptr;
}

Handler::~Handler() {
}

void Handler::setSuccessor(Handler *successor) {
    ptrSuccessor = successor;
}
