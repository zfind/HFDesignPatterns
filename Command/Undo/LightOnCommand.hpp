#ifndef COMMAND_LIGHTONCOMMAND_HPP
#define COMMAND_LIGHTONCOMMAND_HPP

#include <memory>
#include "Light.hpp"
#include "Command.hpp"

namespace HFDesignPatterns {
namespace Command {
namespace Undo {

class LightOnCommand : public Command {
private:
    const std::shared_ptr<Light> light_;

public:
    explicit LightOnCommand(std::shared_ptr<Light> light)
        :light_(std::move(light)) { }

    void execute() override
    {
        light_->on();
    }

    void undo() override
    {
        light_->off();
    }

};

} // Undo
} // Command
} // HFDesignPatterns

#endif //COMMAND_LIGHTONCOMMAND_HPP
