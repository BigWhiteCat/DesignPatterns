#include <iostream>

#include "CEO.h"
#include "Director.h"
#include "Handler.h"
#include "Manager.h"

using namespace std;

int main() {
    Handler *manager = new Manager;
    Handler *director = new Director;
    Handler *ceo = new CEO;

    manager->setSuccessor(director);
    director->setSuccessor(ceo);

    manager->handleRequest(1);
    manager->handleRequest(2);
    manager->handleRequest(6);
    manager->handleRequest(15);

    delete manager;
    manager = nullptr;
    delete director;
    director = nullptr;
    delete ceo;
    ceo = nullptr;

    return 0;
}
