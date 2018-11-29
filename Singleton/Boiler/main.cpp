#include <iostream>

#include "Boiler.hpp"
using namespace HFDesignPatterns::Singleton::Boiler;

int main()
{
    Boiler& boiler = Boiler::getInstance();
    boiler.fill();
    boiler.boil();
    boiler.drain();

    Boiler& boiler1 = Boiler::getInstance();
    if (&boiler==&boiler1) {
        std::cout << "Same!" << std::endl;
    } else {
        std::cout << "Wrong!" << std::endl;
    }

    return 0;
}