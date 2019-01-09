#include <iostream>

#include "Director.h"

Director::Director() {
}

Director::~Director() {
}

void Director::handleRequest(double days) {
    if (days <= 3) {
        std::cout << "Director 批准了 " << days << " 天假" << std::endl;
    } else {
        ptrSuccessor->handleRequest(days);
    }
}
