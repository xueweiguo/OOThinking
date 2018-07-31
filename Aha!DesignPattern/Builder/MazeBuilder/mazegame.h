#ifndef MAZEGAME_H
#define MAZEGAME_H

#include"maze.h"

class MazeBuilder;

class MazeGame
{
public:
    MazeGame();
    MazePtr CreateMaze(MazeBuilder& builder);
};

#endif // MAZEGAME_H
