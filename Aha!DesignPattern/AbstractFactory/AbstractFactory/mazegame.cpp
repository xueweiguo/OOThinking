#include <memory>
#include "mazegame.h"

#include "mazefactory.h"
#include "maze.h"
#include "room.h"
#include "wall.h"
#include "door.h"


MazeGame::MazeGame()
{

}

MazePtr MazeGame::CreateMaze(MazeFactory& factory)
{
    MazePtr aMaze = factory.MakeMaze();
    RoomPtr r1 = factory.MakeRoom(1);
    RoomPtr r2 = factory.MakeRoom(2);
    DoorPtr aDoor = factory.MakeDoor(r1, r2);

    aMaze->AddRoom(r1);
    aMaze->AddRoom(r2);

    r1->SetSide(Room::North, factory.MakeWall());
    r1->SetSide(Room::East, aDoor);
    r1->SetSide(Room::South, factory.MakeWall());
    r1->SetSide(Room::West, factory.MakeWall());

    r2->SetSide(Room::North, factory.MakeWall());
    r2->SetSide(Room::East, factory.MakeWall());
    r2->SetSide(Room::South, factory.MakeWall());
    r2->SetSide(Room::West, aDoor);

    return aMaze;
}
