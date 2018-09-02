#ifndef BOMBEDMAZEGAME_H
#define BOMBEDMAZEGAME_H

#include"mazegame.h"

class BombedMazeGame : public MazeGame
{
public:
    BombedMazeGame();

    virtual WallPtr MakeWall() const;
    virtual RoomPtr MakeRoom(int n) const;
};

#endif // BOMBEDMAZEGAME_H
