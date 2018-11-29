#ifndef ADAPTER_MALLARDDUCK_HPP
#define ADAPTER_MALLARDDUCK_HPP

#include <iostream>
#include "Duck.hpp"

namespace HFDesignPatterns {
namespace Adapter {
namespace Ducks {

class MallardDuck : public Duck {
public:

    void fly() const override
    {
        std::cout << "I'm flying" << std::endl;
    }

    void quack() const override
    {
        std::cout << "Quack" << std::endl;
    }

};

} // Ducks
} // Adapter
} // HFDesignPatterns

#endif //ADAPTER_MALLARDDUCK_HPP
