#ifndef TEMPLATE_TEA_HPP
#define TEMPLATE_TEA_HPP

#include "CaffeineBeverage.hpp"

namespace HFDesignPatterns {
namespace Template {
namespace Barista {

class Tea : public CaffeineBeverage {
public:

    void brew() const override
    {
        std::cout << "Steeping tea" << std::endl;
    }

    void addCondiments() const override
    {
        std::cout << "Adding lemon" << std::endl;
    }

};

} // Barista
} // Template
} // HFDesignPatterns

#endif //TEMPLATE_TEA_HPP
