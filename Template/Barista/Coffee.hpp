//
// Created by zac on 24.11.18..
//

#ifndef TEMPLATE_COFFEE_HPP
#define TEMPLATE_COFFEE_HPP

#include "CaffeineBeverage.hpp"

namespace HFDesignPatterns {
namespace Template {
namespace Barista {

class Coffee : public CaffeineBeverage {
public:
    void brew() const override
    {
        std::cout << "Dripping coffee through filter" << std::endl;
    }

    void addCondiments() const override
    {
        std::cout << "Adding sugar and milk" << std::endl;
    }

};

} // Barista
} // Template
} // HFDesignPatterns

#endif //TEMPLATE_COFFEE_HPP
