#ifndef BEVERAGE_MILK_HPP
#define BEVERAGE_MILK_HPP

#include <iostream>
#include <string>
#include "Beverage.hpp"
#include "CondimentDecorator.hpp"

namespace HFDesignPatterns {
namespace Decorator {
namespace Beverage {

class Milk : public CondimentDecorator {
private:
    const std::unique_ptr<Beverage> beverage_;

public:
    explicit Milk(std::unique_ptr<Beverage> beverage)
        :beverage_(std::move(beverage)) { }

    ~Milk() override = default;

    std::string getDescription() const override
    {
        return beverage_->getDescription()+", Milk";
    }

    double cost() const override
    {
        return 0.10+beverage_->cost();
    }

};

} // Beverage
} // Decorator
} // HFDesignPatterns

#endif //BEVERAGE_MILK_HPP
