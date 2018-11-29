#ifndef COMMAND_LIGHTOFFCOMMAND_HPP
#define COMMAND_LIGHTOFFCOMMAND_HPP

#include <memory>
#include "Light.hpp"
#include "Command.hpp"

namespace HFDesignPatterns {
namespace Command {
namespace Undo {

class LightOffCommand : public Command {
private:
    const std::shared_ptr<Light> light_;

public:
    explicit LightOffCommand(std::shared_ptr<Light> light)
        :light_(std::move(light)) { }

    void execute() override
    {
        light_->off();
    }

    void undo() override
    {
        light_->on();
    }

};

} // Undo
} // Command
} // HFDesignPatterns

#endif //COMMAND_LIGHTOFFCOMMAND_HPP
