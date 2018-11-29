#ifndef BEVERAGE_WHIP_HPP
#define BEVERAGE_WHIP_HPP

#include "CondimentDecorator.hpp"

namespace HFDesignPatterns {
namespace Decorator {
namespace Beverage {

class Whip : public CondimentDecorator {
private:
    const std::unique_ptr<Beverage> beverage_;

public:
    explicit Whip(std::unique_ptr<Beverage> beverage)
        :beverage_(std::move(beverage)) { }

    ~Whip() override = default;

    std::string getDescription() const override
    {
        return beverage_->getDescription()+", Whip";
    }

    double cost() const override
    {
        return 0.10+beverage_->cost();
    }

};

} // Beverage
} // Decorator
} // HFDesignPatterns

#endif //BEVERAGE_WHIP_HPP
