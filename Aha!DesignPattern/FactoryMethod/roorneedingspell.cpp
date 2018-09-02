#include <iostream>
#include "roorneedingspell.h"

DoorNeedingSpell::DoorNeedingSpell(RoomPtr r1, RoomPtr r2)
    :Door(r1, r2)
{
    std::cout << "A DoorNeedingSpell created." << std::endl;
}
