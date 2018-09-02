#include <iostream>
#include "enchantedroom.h"

EnchantedRoom::EnchantedRoom(int n, SpellPtr spell)
    :Room(n)
{
    std::cout << "A EnchantedRoom created." << std::endl;
}
