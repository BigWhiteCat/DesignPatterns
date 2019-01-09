#include <iostream>

#include "CEO.h"

CEO::CEO() {
}

CEO::~CEO() {
}

void CEO::handleRequest(double days) {
    if (days <= 7) {
        std::cout << "CEO 批准了 " << days << " 天假" << std::endl;
    } else {
        std::cout << "给你放长假了，以后不用来上班了！" << std::endl;
    }
}
