#include <memory>
#include <iostream>
#include "doorneedingspell.h"

using namespace std;

DoorNeedingSpell::DoorNeedingSpell(RoomPtr r1, RoomPtr r2)
    :Door(r1, r2)
{
    cout << "-DoorNeedingSpell::DoorNeedingSpell()" << endl;
}
