#ifndef COMMAND_LIGHT_HPP
#define COMMAND_LIGHT_HPP

#include <iostream>
#include <utility>

namespace HFDesignPatterns {
namespace Command {
namespace Undo {

class Light {
private:
    int level_;
    std::string location_;

public:
    explicit Light(std::string location)
        :location_(std::move(location)),
         level_(0) { }

    int getLevel() const
    {
        return level_;
    }

    void on()
    {
        level_ = 100;
        std::cout << location_ << " Light on" << std::endl;
    }

    void off()
    {
        level_ = 0;
        std::cout << location_ << " Light off" << std::endl;
    }

    void dim(int level)
    {
        level_ = level;
        if (level_==0) {
            off();
        } else {
            std::cout << "Light is dimmed to " << level_ << "%" << std::endl;
        }
    }

};

} // Undo
} // Command
} // HFDesignPatterns

#endif //COMMAND_LIGHT_HPP
