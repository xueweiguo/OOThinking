#include <memory>
#include "maze.h"

Maze::Maze(){

}

Maze::~Maze(){

}

void Maze::AddRoom(RoomPtr room)
{
    rooms.push_back(room);
}
