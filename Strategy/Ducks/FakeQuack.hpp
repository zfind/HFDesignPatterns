#ifndef STRATEGY_FAKEQUACK_H
#define STRATEGY_FAKEQUACK_H

namespace HFDesignPatterns {
namespace Strategy {
namespace Ducks {

class FakeQuack : public QuackBehavior {
public:

    void quack() const override
    {
        std::cout << "Qwak" << std::endl;
    }

};

} // Ducks
} // Strategy
} // HFDesignPatterns

#endif //STRATEGY_FAKEQUACK_H
