#ifndef COMMAND_REMOTECONTROLWITHUNDO_HPP
#define COMMAND_REMOTECONTROLWITHUNDO_HPP

#include <array>
#include <memory>
#include <sstream>
#include <vector>
#include "Command.hpp"
#include "NoCommand.hpp"

namespace HFDesignPatterns {
namespace Command {
namespace Undo {

class RemoteControlWithUndo {
private:
    static const int SLOTS = 7;
    std::array<std::shared_ptr<Command>, SLOTS> onCommands_;
    std::array<std::shared_ptr<Command>, SLOTS> offCommands_;
    std::shared_ptr<Command> noCommand_;
    mutable std::shared_ptr<Command> undoCommand_;

public:
    RemoteControlWithUndo()
    {
        noCommand_ = std::make_shared<NoCommand>();
        for (int i = 0; i<SLOTS; i++) {
            onCommands_[i] = noCommand_;
            offCommands_[i] = noCommand_;
        }
        undoCommand_ = noCommand_;
    }

    void setCommand(int slot, std::shared_ptr<Command> onCommand, std::shared_ptr<Command> offCommand)
    {
        onCommands_[slot] = std::move(onCommand);
        offCommands_[slot] = std::move(offCommand);
    }

    void pressOn(int slot) const
    {
        onCommands_[slot]->execute();
        undoCommand_ = onCommands_[slot];
    }

    void pressOff(int slot) const
    {
        offCommands_[slot]->execute();
        undoCommand_ = offCommands_[slot];
    }

    void pressUndo() const
    {
        undoCommand_->undo();
    }

    std::string toString() const
    {
        std::stringstream value;
        value << std::endl << "===== Remote Control =====" << std::endl;
        for (int i = 0; i<SLOTS; i++) {
            value << "[slot " << i << "] ";
            value << typeid(*onCommands_[i]).name();
            value << "    ";
            value << typeid(*offCommands_[i]).name();
            value << std::endl;
        }
        value << "[undo] " << typeid(*undoCommand_).name() << std::endl;

        return value.str();
    }
};

} // Undo
} // Command
} // HFDesignPatterns

#endif //COMMAND_REMOTECONTROLWITHUNDO_HPP
