#include <iostream>

using namespace std;

#include"mazegame.h"
#include"mazeprotytypefactory.h"

#include"bombedwall.h"
#include"roomwithabomb.h"

void test1()
{
    MazeGame game;

    MazeProtytypeFactory factory(
        std::make_shared<Maze>(),
        std::make_shared<Wall>(),
        std::make_shared<Room>(),
        std::make_shared<Door>());

    MazePtr maze = game.CreateMaze(factory);
}

void test2()
{
    MazeGame game;

    MazeProtytypeFactory factory(
        std::make_shared<Maze>(),
        std::make_shared<BombedWall>(),
        std::make_shared<RoomWithABomb>(),
        std::make_shared<Door>());

    MazePtr maze = game.CreateMaze(factory);
}


int main()
{
    test1();
    test2();
    return 0;
}
