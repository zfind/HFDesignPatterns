#ifndef ADAPTER_WILDTURKEY_HPP
#define ADAPTER_WILDTURKEY_HPP

#include <iostream>
#include "Turkey.hpp"

namespace HFDesignPatterns {
namespace Adapter {
namespace Ducks {

class WildTurkey : public Turkey {
public:

    void fly() const override
    {
        std::cout << "I'm flying short distance" << std::endl;
    }

    void gobble() const override
    {
        std::cout << "Gobble gobble" << std::endl;
    }

};

} // Ducks
} // Adapter
} // HFDesignPatterns

#endif //ADAPTER_WILDTURKEY_HPP
