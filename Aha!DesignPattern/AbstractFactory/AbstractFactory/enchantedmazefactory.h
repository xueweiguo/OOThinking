#ifndef ENCHANTEDMAZEFACTORY_H
#define ENCHANTEDMAZEFACTORY_H

#include"mazefactory.h"
#include"spell.h"

class EnchantedMazeFactory : public MazeFactory
{
public:
    EnchantedMazeFactory();
    virtual ~EnchantedMazeFactory();
    RoomPtr MakeRoom(int n) const;
    DoorPtr MakeDoor(RoomPtr r1, RoomPtr r2) const;
protected:
    SpellPtr CastSpell() const;
};

#endif // ENCHANTEDMAZEFACTORY_H
