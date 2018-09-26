#include "maze.h"

Maze::Maze()
{

}

Maze::Maze(const Maze& other)
{

}

MazePtr Maze::Clone() const
{
    return std::make_shared<Maze>(*this);
}

void Maze::AddRoom(RoomPtr room)
{
    rooms.push_back(room);
}
