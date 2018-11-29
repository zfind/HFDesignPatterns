#ifndef BEVERAGE_MOCHA_HPP
#define BEVERAGE_MOCHA_HPP

#include "CondimentDecorator.hpp"

namespace HFDesignPatterns {
namespace Decorator {
namespace Beverage {

class Mocha : public CondimentDecorator {
private:
    const std::unique_ptr<Beverage> beverage_;

public:
    explicit Mocha(std::unique_ptr<Beverage> beverage)
        :beverage_(std::move(beverage)) { }

    ~Mocha() override = default;

    std::string getDescription() const override
    {
        return beverage_->getDescription()+", Mocha";
    }

    double cost() const override
    {
        return 0.20+beverage_->cost();
    }

};

} // Beverage
} // Decorator
} // HFDesignPatterns

#endif //BEVERAGE_MOCHA_HPP
