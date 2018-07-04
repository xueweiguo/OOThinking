#ifndef MAZEFACTORY_H
#define MAZEFACTORY_H

#include<memory>
#include"maze.h"
#include"wall.h"
#include"room.h"
#include"door.h"

class MazeFactory
{
public:
    MazeFactory();
    virtual ~MazeFactory();
    virtual MazePtr MakeMaze() const;
    virtual WallPtr MakeWall() const;
    virtual RoomPtr MakeRoom(int n) const;
    virtual DoorPtr MakeDoor(RoomPtr r1, RoomPtr r2) const;
};

#endif // MAZEFACTORY_H
