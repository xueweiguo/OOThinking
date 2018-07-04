#ifndef WALL_H
#define WALL_H

#include"side.h"

class Wall : public Side
{
public:
    Wall();
    virtual ~Wall();
};

typedef std::shared_ptr<Wall> WallPtr;

#endif // WALL_H
