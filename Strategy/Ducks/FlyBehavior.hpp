#ifndef STRATEGY_FLYBEHAVIOR_H
#define STRATEGY_FLYBEHAVIOR_H

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class FlyBehavior {
public:
    virtual ~FlyBehavior() = default;

public:
    virtual void fly() const = 0;

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_FLYBEHAVIOR_H
