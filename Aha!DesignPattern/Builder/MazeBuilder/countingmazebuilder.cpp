#include "countingmazebuilder.h"

CountingMazeBuilder::CountingMazeBuilder()
    :_rooms(0),_doors(0)
{

}

void CountingMazeBuilder::BuildMaze()
{

}

void CountingMazeBuilder::BuildRoom(int n)
{
    _rooms++;
}

void CountingMazeBuilder::BuildDoor(int n1, int n2)
{
    _doors++;
}

void CountingMazeBuilder::GetCounts(int& doors, int & rooms) const
{
    doors = _doors;
    rooms = _rooms;
}
