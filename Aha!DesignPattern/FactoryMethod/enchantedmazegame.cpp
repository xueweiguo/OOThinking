#include "enchantedmazegame.h"
#include "enchantedroom.h"
#include "doorneedingspell.h"

EnchantedMazeGame::EnchantedMazeGame()
{

}

RoomPtr EnchantedMazeGame::MakeRoom(int n) const
{
    return std::make_shared<EnchantedRoom>(n, CastSpell());
}

DoorPtr EnchantedMazeGame::MakeDoor(RoomPtr r1, RoomPtr r2) const
{
    return std::make_shared<DoorNeedingSpell>(r1, r2);
}

SpellPtr EnchantedMazeGame::CastSpell() const
{
    return std::make_shared<Spell>();
}
