#include <iostream>
#include "maze.h"
#include "mazegame.h"
#include "standardmazebuilder.h"
#include "countingmazebuilder.h"

using namespace std;

void StandardMazeBuilderTest()
{
    MazeGame game;
    StandardMazeBuilder builder;
    game.CreateMaze(builder);
    MazePtr maze = builder.GetMaze();
}

void CounterMazeBuilderTest()
{
    int rooms, doors;
    MazeGame game;
    CountingMazeBuilder builder;

    game.CreateMaze(builder);
    builder.GetCounts(rooms, doors);
    cout << "The maze has "
         << rooms << " rooms and "
         << doors << " doors." << endl;
}

int main()
{
    StandardMazeBuilderTest();
    CounterMazeBuilderTest();
    return 0;
}
