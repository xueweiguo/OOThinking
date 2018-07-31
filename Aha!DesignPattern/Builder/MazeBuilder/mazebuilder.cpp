#include "mazebuilder.h"

MazeBuilder::MazeBuilder()
{

}

void MazeBuilder::BuildMaze()
{

}

void MazeBuilder::BuildRoom(int /*n*/)
{

}

void MazeBuilder::BuildDoor(int /*n1*/, int /*n2*/)
{

}

MazePtr MazeBuilder::GetMaze()
{
    return std::make_shared<Maze>();
}
