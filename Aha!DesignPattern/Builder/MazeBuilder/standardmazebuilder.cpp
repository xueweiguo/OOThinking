#include "standardmazebuilder.h"
#include "maze.h"
#include "room.h"
#include "wall.h"
#include "door.h"

StandardMazeBuilder::StandardMazeBuilder()
{

}

void StandardMazeBuilder::BuildMaze()
{
    _currentMaze = std::make_shared<Maze>();
}

void StandardMazeBuilder::BuildRoom(int n)
{
    if(_currentMaze->RoomNo(n) == nullptr)
    {
        RoomPtr room = std::make_shared<Room>(n);
        _currentMaze->AddRoom(room);

        room->SetSide(North, std::make_shared<Wall>());
        room->SetSide(South, std::make_shared<Wall>());
        room->SetSide(East, std::make_shared<Wall>());
        room->SetSide(West, std::make_shared<Wall>());
    }
}

void StandardMazeBuilder::BuildDoor(int n1, int n2)
{
    RoomPtr r1 = _currentMaze->RoomNo(n1);
    RoomPtr r2 = _currentMaze->RoomNo(n2);
    DoorPtr d = std::make_shared<Door>(r1, r2);

    r1->SetSide(CommonWall(r1, r2), d);
    r2->SetSide(CommonWall(r2, r1), d);
}

Direction StandardMazeBuilder::CommonWall(RoomPtr r1, RoomPtr r2)
{
    Direction dirs[] = {
        North,
        South,
        East,
        West
    };
    for(size_t i = 0; i < sizeof(dirs)/sizeof(dirs[0]); ++i)
    {
        SidePtr s1;
        if(r1->GetSide(dirs[i], s1))
        {
            for(size_t j = 0; j < sizeof(dirs)/sizeof(dirs[0]); ++j)
            {
                SidePtr s2;
                if(r2->GetSide(dirs[j], s2))
                {
                    if(s2 == s1)
                    {
                        return dirs[i];
                    }
                }
            }
        }
    }
    return None;
}

MazePtr StandardMazeBuilder::GetMaze()
{
    return _currentMaze;
}
