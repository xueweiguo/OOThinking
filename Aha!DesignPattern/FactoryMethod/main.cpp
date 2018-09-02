#include <iostream>
#include "mazegame.h"
#include "bombedmazegame.h"
#include "enchantedmazegame.h"

using namespace std;

int main()
{
    cout << "MageGame!" << endl;
    MazeGame mg;
    mg.CreateMaze();
    cout << "BombedMazeGame!" << endl;
    BombedMazeGame bmg;
    bmg.CreateMaze();
    cout << "EnchantedMazeGame!" << endl;
    EnchantedMazeGame emg;
    emg.CreateMaze();
    return 0;
}
