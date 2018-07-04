#include "enchantedmazefactory.h"
#include "enchantedroom.h"
#include "doorneedingspell.h"

using namespace std;

EnchantedMazeFactory::EnchantedMazeFactory()
{

}

EnchantedMazeFactory::~EnchantedMazeFactory()
{

}

RoomPtr EnchantedMazeFactory::MakeRoom(int n) const
{
    return make_shared<EnchantedRoom>(n, CastSpell());
}

DoorPtr EnchantedMazeFactory::MakeDoor(RoomPtr r1, RoomPtr r2) const
{
    return make_shared<DoorNeedingSpell>(r1, r1);
}

SpellPtr EnchantedMazeFactory::CastSpell() const
{
    return make_shared<Spell>();
}
