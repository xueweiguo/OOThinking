#include "mazegame.h"
#include "mazebuilder.h"

MazeGame::MazeGame()
{

}

MazePtr MazeGame::CreateMaze(MazeBuilder& builder)
{
    builder.BuildMaze();
    builder.BuildRoom(1);
    builder.BuildRoom(2);
    builder.BuildDoor(1, 2);
    return builder.GetMaze();
}


