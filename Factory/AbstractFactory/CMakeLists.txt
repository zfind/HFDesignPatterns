cmake_minimum_required(VERSION 3.9)
project(PizzaAbstractFactory)

set(CMAKE_CXX_STANDARD 17)

add_executable(PizzaAbstractFactory main.cpp
        Pizza.hpp
        PizzaIngredientFactory.hpp
        NYPizzaIngredientFactory.hpp
        ChicagoPizzaIngredientFactory.hpp
        Dough.hpp
        Sauce.hpp
        Cheese.hpp
        Clams.hpp
        PizzaStore.hpp
        NYPizzaStore.hpp
        ChicagPizzaStore.hpp
        Pepperoni.hpp
        Veggies.hpp
        ThinCrustDough.hpp
        MarinaraSauce.hpp
        RegganoCheese.hpp
        SlicedPepperoni.hpp
        FreshClams.hpp
        Garlic.hpp
        Onion.hpp
        Mushrooms.hpp
        RedPepper.hpp
        CheesePizza.hpp
        VeggiePizza.hpp
        ClamPizza.hpp
        PepperoniPizza.hpp
        ThickCrustDough.hpp
        PlumTomatoSauce.hpp
        MozzarellaCheese.hpp
        FrozenClams.hpp
        BlackOlives.hpp
        Spinach.hpp
        Eggplant.hpp)