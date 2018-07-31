#ifndef MAZE_H
#define MAZE_H

#include<memory>
#include<map>
#include"room.h"

class Maze
{
public:
    Maze();
    RoomPtr RoomNo(int n);
    void AddRoom(RoomPtr room);
private:
    std::map<int, RoomPtr> m_roomMap;
};

typedef std::shared_ptr<Maze> MazePtr;

#endif // MAZE_H
