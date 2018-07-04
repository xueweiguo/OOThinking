#include <iostream>
#include <memory>
#include <iostream>
#include <mazegame.h>
#include "mazefactory.h"
#include "enchantedmazefactory.h"
#include "bombedmazefactory.h"

using namespace std;

void test1()
{
    cout << "test1()" << endl;
    MazeFactory factory;
    MazeGame game;
    MazePtr g = game.CreateMaze(factory);
    cout << endl;
}

void test2()
{
    cout << "test2()" << endl;
    EnchantedMazeFactory factory;
    MazeGame game;
    MazePtr g = game.CreateMaze(factory);
    cout << endl;
}

void test3()
{
    cout << "test3()" << endl;
    BombedMazeFactory factory;
    MazeGame game;
    MazePtr g = game.CreateMaze(factory);
    cout << endl;
}

int main()
{
    test1();
    test2();
    test3();
    cout << GameObj::getCounter() << endl;
    return 0;
}
