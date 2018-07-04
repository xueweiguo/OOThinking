#ifndef DOORNEEDINGSPELL_H
#define DOORNEEDINGSPELL_H

#include"door.h"

class DoorNeedingSpell : public Door
{
public:
    DoorNeedingSpell(RoomPtr r1, RoomPtr r2);
};

#endif // DOORNEEDINGSPELL_H
