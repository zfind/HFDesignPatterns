#ifndef COMMAND_COMMAND_HPP
#define COMMAND_COMMAND_HPP

namespace HFDesignPatterns {
namespace Command {
namespace Undo {

class Command {
public:
    virtual ~Command() = default;

public:
    virtual void execute() = 0;
    virtual void undo() = 0;

};

} // Undo
} // Command
} // HFDesignPatterns

#endif //COMMAND_COMMAND_HPP
