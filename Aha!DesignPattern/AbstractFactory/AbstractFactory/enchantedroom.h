#ifndef ENCHANTEDROOM_H
#define ENCHANTEDROOM_H

#include "room.h"
#include "spell.h"

class EnchantedRoom : public Room
{
public:
    EnchantedRoom(int n, SpellPtr s);
    virtual ~EnchantedRoom();
protected:
    SpellPtr sp;
};

#endif // ENCHANTEDROOM_H
