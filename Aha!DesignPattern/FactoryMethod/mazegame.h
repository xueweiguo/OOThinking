#ifndef MAZEGAME_H
#define MAZEGAME_H

#include"maze.h"
#include"room.h"
#include"wall.h"
#include"door.h"

class MazeGame
{
public:
    MazeGame();

    MazePtr CreateMaze();

    virtual MazePtr MakeMaze() const;
    virtual RoomPtr MakeRoom(int n) const;
    virtual WallPtr MakeWall() const;
    virtual DoorPtr MakeDoor(RoomPtr r1, RoomPtr r2) const;
};

#endif // MAZEGAME_H
