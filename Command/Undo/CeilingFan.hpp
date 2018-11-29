#ifndef COMMAND_CEILINGFAN_HPP
#define COMMAND_CEILINGFAN_HPP

#include <iostream>

namespace HFDesignPatterns {
namespace Command {
namespace Undo {

class CeilingFan {
public:
    enum class Speed : unsigned char {
        HIGH = 3,
        MEDIUM = 2,
        LOW = 1,
        OFF = 0,
    };

private:
    Speed speed_;
    std::string location_;

public:
    explicit CeilingFan(std::string location)
        :speed_(Speed::OFF),
         location_(std::move(location)) { }

    Speed getSpeed() const
    {
        return speed_;
    }

    void high()
    {
        speed_ = Speed::HIGH;
        std::cout << location_ << " Ceiling Fan is HIGH" << std::endl;
    }

    void medium()
    {
        speed_ = Speed::MEDIUM;
        std::cout << location_ << " Ceiling fan is MEDIUM" << std::endl;
    }

    void low()
    {
        speed_ = Speed::LOW;
        std::cout << location_ << " Ceiling fan is LOW" << std::endl;
    }

    void off()
    {
        speed_ = Speed::OFF;
        std::cout << location_ << " Ceiling fan is OFF" << std::endl;
    }
};

} // Undo
} // Command
} // HFDesignPatterns

#endif //COMMAND_CEILINGFAN_HPP
