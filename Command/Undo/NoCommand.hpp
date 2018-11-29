#ifndef COMMAND_NOCOMMAND_HPP
#define COMMAND_NOCOMMAND_HPP

#include "Command.hpp"

namespace HFDesignPatterns {
namespace Command {
namespace Undo {

class NoCommand : public Command {
public:

    void execute() override
    {
    }

    void undo() override
    {
    }

};

} // Undo
} // Command
} // HFDesignPatterns

#endif //COMMAND_NOCOMMAND_HPP
