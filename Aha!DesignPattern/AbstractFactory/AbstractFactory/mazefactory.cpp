#include "mazefactory.h"

using namespace std;

MazeFactory::MazeFactory()
{

}

MazeFactory::~MazeFactory()
{

}

MazePtr MazeFactory::MakeMaze() const
{
    return make_shared<Maze>();
}

WallPtr MazeFactory::MakeWall() const
{
    return make_shared<Wall>();
}

RoomPtr MazeFactory::MakeRoom(int n) const
{
    return make_shared<Room>(n);
}

DoorPtr MazeFactory::MakeDoor(RoomPtr r1, RoomPtr r2) const
{
    return make_shared<Door>(r1, r2);
}
