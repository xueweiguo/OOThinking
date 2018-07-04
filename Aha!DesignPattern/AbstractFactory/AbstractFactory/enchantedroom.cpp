#include <memory>
#include <iostream>
#include "enchantedroom.h"

using namespace std;

EnchantedRoom::EnchantedRoom(int n, SpellPtr s)
    :Room(n)
    ,sp(s)
{
    cout << "-EnchantedRoom::EnchantedRoom()" << endl;
}

EnchantedRoom::~EnchantedRoom()
{

}
