#ifndef COMMAND_CEILINGFANMEDIUMCOMMAND_HPP
#define COMMAND_CEILINGFANMEDIUMCOMMAND_HPP

#include <memory>
#include "Command.hpp"
#include "CeilingFan.hpp"

namespace HFDesignPatterns {
namespace Command {
namespace Undo {

class CeilingFanMediumCommand : public Command {
private:
    const std::shared_ptr<CeilingFan> ceilingFan_;
    CeilingFan::Speed prevSpeed_;

public:
    explicit CeilingFanMediumCommand(std::shared_ptr<CeilingFan> ceilingFan)
        :ceilingFan_(std::move(ceilingFan))
    {
        prevSpeed_ = ceilingFan_->getSpeed();
    }

    void execute() override
    {
        ceilingFan_->getSpeed();
        ceilingFan_->medium();
    }

    void undo() override
    {
        switch (prevSpeed_) {
        case CeilingFan::Speed::HIGH:
            ceilingFan_->high();
            break;
        case CeilingFan::Speed::MEDIUM:
            ceilingFan_->medium();
            break;
        case CeilingFan::Speed::LOW:
            ceilingFan_->low();
            break;
        default:
            ceilingFan_->off();
            break;
        }
    }

};

} // Undo
} // Command
} // HFDesignPatterns

#endif //COMMAND_CEILINGFANMEDIUMCOMMAND_HPP
