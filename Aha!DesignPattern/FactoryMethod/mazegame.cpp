#include "mazegame.h"

MazeGame::MazeGame()
{

}

MazePtr MazeGame::CreateMaze()
{
    MazePtr aMaze = MakeMaze();

    RoomPtr r1 = MakeRoom(1);
    RoomPtr r2 = MakeRoom(2);
    DoorPtr theDoor = MakeDoor(r1, r2);

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    r1->setSide(North, MakeWall());
    r1->setSide(East, theDoor);
    r1->setSide(South, MakeWall());
    r1->setSide(West, MakeWall());

    r2->setSide(North, MakeWall());
    r2->setSide(East, MakeWall());
    r2->setSide(South, MakeWall());
    r2->setSide(West, theDoor);

    return aMaze;
}

MazePtr MazeGame::MakeMaze() const
{
    return std::make_shared<Maze>();
}

RoomPtr MazeGame::MakeRoom(int n) const
{
    return std::make_shared<Room>(n);
}

WallPtr MazeGame::MakeWall() const
{
    return std::make_shared<Wall>();
}

DoorPtr MazeGame::MakeDoor(RoomPtr r1, RoomPtr r2) const
{
    return std::make_shared<Door>(r1, r2);
}
