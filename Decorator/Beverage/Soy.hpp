#ifndef BEVERAGE_SOY_HPP
#define BEVERAGE_SOY_HPP

#include "CondimentDecorator.hpp"

namespace HFDesignPatterns {
namespace Decorator {
namespace Beverage {

class Soy : public CondimentDecorator {
private:
    const std::unique_ptr<Beverage> beverage_;

public:
    explicit Soy(std::unique_ptr<Beverage> beverage)
        :beverage_(std::move(beverage)) { }

    ~Soy() override = default;

    std::string getDescription() const override
    {
        return beverage_->getDescription()+", Soy";
    }

    double cost() const override
    {
        return 0.15+beverage_->cost();
    }

};

} // Beverage
} // Decorator
} // HFDesignPatterns

#endif //BEVERAGE_SOY_HPP
