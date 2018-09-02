#ifndef EHCHANTEDROOM_H
#define EHCHANTEDROOM_H

#include<memory>
#include"room.h"
#include"spell.h"

class EnchantedRoom : public Room
{
public:
    EnchantedRoom(int n, SpellPtr spell);
};

typedef std::shared_ptr<EnchantedRoom> EnRoomPtr;

#endif // EHCHANTEDROOM_H
