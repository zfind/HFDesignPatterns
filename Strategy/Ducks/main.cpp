#include <memory>
#include "FlyBehavior.hpp"
#include "FlyNoWay.hpp"
#include "FlyRocketPowered.hpp"
#include "FlyWithWings.hpp"
#include "QuackBehavior.hpp"
#include "Quack.hpp"
#include "MuteQuack.hpp"
#include "Squeak.hpp"
#include "Duck.hpp"
#include "DecoyDuck.hpp"
#include "MallardDuck.hpp"
#include "ModelDuck.hpp"
#include "RedheadDuck.hpp"
#include "RubberDuck.hpp"

using namespace HFDesignPatterns::Strategy::Ducks;

int main()
{
    auto mallardDuck = std::make_unique<MallardDuck>();
    auto rubberDuck = std::make_unique<RubberDuck>();
    auto decoyDuck = std::make_unique<DecoyDuck>();
    auto modelDuck = std::make_unique<ModelDuck>();

    mallardDuck->performQuack();
    mallardDuck->performFly();

    rubberDuck->performQuack();
    rubberDuck->performFly();

    decoyDuck->performQuack();
    decoyDuck->performFly();

    modelDuck->performQuack();
    modelDuck->performFly();
    modelDuck->setFlyBehavior(std::make_unique<FlyRocketPowered>());
    modelDuck->performFly();

    return 0;
}
