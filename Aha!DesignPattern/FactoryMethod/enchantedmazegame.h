#ifndef ENCHANTEDMAZEGAME_H
#define ENCHANTEDMAZEGAME_H

#include"mazegame.h"
#include"spell.h"

class EnchantedMazeGame : public MazeGame
{
public:
    EnchantedMazeGame();
    virtual RoomPtr MakeRoom(int n) const;
    virtual DoorPtr MakeDoor(RoomPtr r1, RoomPtr r2) const;
protected:
    SpellPtr CastSpell() const;
};

#endif // ENCHANTEDMAZEGAME_H
