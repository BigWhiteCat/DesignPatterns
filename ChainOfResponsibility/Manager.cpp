#include <iostream>

#include "Manager.h"

Manager::Manager() {
}

Manager::~Manager() {
}

void Manager::handleRequest(double days) {
    if (days <= 1) {
        std::cout << "Managet 批准了 " << days << " 天假" << std::endl;
    } else {
        ptrSuccessor->handleRequest(days);
    }
}
