#include <iostream>
#include <memory>
#include "Light.hpp"
#include "LightOnCommand.hpp"
#include "RemoteControlWithUndo.hpp"
#include "LightOffCommand.hpp"
#include "CeilingFan.hpp"
#include "CeilingFanMediumCommand.hpp"
#include "CeilingFanHighCommand.hpp"
#include "CeilingFanOffCommand.hpp"

using namespace HFDesignPatterns::Command::Undo;

int main()
{
    RemoteControlWithUndo remoteControl;

    std::shared_ptr<Light> livingRoomLight = std::make_shared<Light>("Living Room");
    std::shared_ptr<Command> livingRoomLightOn = std::make_shared<LightOnCommand>(livingRoomLight);
    std::shared_ptr<Command> livingRoomLightOff = std::make_shared<LightOffCommand>(livingRoomLight);
    remoteControl.setCommand(0, livingRoomLightOn, livingRoomLightOff);

    remoteControl.pressOn(0);
    remoteControl.pressOff(0);
    std::cout << remoteControl.toString() << std::endl;
    remoteControl.pressUndo();
    remoteControl.pressOff(0);
    remoteControl.pressOn(0);
    std::cout << remoteControl.toString() << std::endl;
    remoteControl.pressUndo();

    std::shared_ptr<CeilingFan> ceilingFan = std::make_shared<CeilingFan>("Living Room");
    std::shared_ptr<Command> ceilingFanMedium = std::make_shared<CeilingFanMediumCommand>(ceilingFan);
    std::shared_ptr<Command> ceilingFanHigh = std::make_shared<CeilingFanHighCommand>(ceilingFan);
    std::shared_ptr<Command> ceilingFanOff = std::make_shared<CeilingFanOffCommand>(ceilingFan);
    remoteControl.setCommand(0, ceilingFanMedium, ceilingFanOff);
    remoteControl.setCommand(1, ceilingFanHigh, ceilingFanOff);

    remoteControl.pressOn(0);
    remoteControl.pressOff(0);
    std::cout << remoteControl.toString() << std::endl;
    remoteControl.pressUndo();

    remoteControl.pressOn(1);
    std::cout << remoteControl.toString() << std::endl;
    remoteControl.pressUndo();

    return 0;
}