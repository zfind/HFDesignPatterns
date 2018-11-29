#ifndef STRATEGY_QUACKBEHAVIOR_H
#define STRATEGY_QUACKBEHAVIOR_H

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class QuackBehavior {
public:
    virtual ~QuackBehavior() = default;

public:
    virtual void quack() const = 0;

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_QUACKBEHAVIOR_H
