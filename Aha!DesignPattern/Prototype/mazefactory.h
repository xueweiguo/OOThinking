#ifndef MAZEFACTORY_H
#define MAZEFACTORY_H

#include"maze.h"
#include"room.h"
#include"wall.h"
#include"door.h"

class MazeFactory
{
public:
    MazeFactory();
    virtual MazePtr MakeMaze() const = 0;
    virtual RoomPtr MakeRoom(int n) const = 0;
    virtual WallPtr MakeWall() const = 0;
    virtual DoorPtr MakeDoor(RoomPtr r1, RoomPtr r2) const = 0;
};

#endif // MAZEFACTORY_H
