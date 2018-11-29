#ifndef STRATEGY_DUCK_H
#define STRATEGY_DUCK_H

#include <iostream>
#include "FlyBehavior.hpp"
#include "QuackBehavior.hpp"

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class Duck {

private:
    std::unique_ptr<FlyBehavior> flyBehavior_;
    std::unique_ptr<QuackBehavior> quackBehavior_;

protected:
    explicit Duck(std::unique_ptr<FlyBehavior> flyBehavior, std::unique_ptr<QuackBehavior> quackBehavior)
        :flyBehavior_(std::move(flyBehavior)),
         quackBehavior_(std::move(quackBehavior)) { }

public:
    virtual ~Duck() = default;

public:
    void setFlyBehavior(std::unique_ptr<FlyBehavior> flyBehavior)
    {
        flyBehavior_ = std::move(flyBehavior);
    }

    void setQuackBehavior(std::unique_ptr<QuackBehavior> quackBehavior)
    {
        quackBehavior_ = std::move(quackBehavior);
    }

    void performFly() const
    {
        flyBehavior_->fly();
    }

    void performQuack() const
    {
        quackBehavior_->quack();
    }

    void swim() const
    {
        std::cout << "All ducks float" << std::endl;
    }

    virtual void display() const = 0;

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_DUCK_H
