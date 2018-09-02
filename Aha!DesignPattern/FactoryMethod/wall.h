#ifndef WALL_H
#define WALL_H

#include<memory>
#include"side.h"

class Wall : public Side
{
public:
    Wall();
};

typedef std::shared_ptr<Wall> WallPtr;

#endif // WALL_H
