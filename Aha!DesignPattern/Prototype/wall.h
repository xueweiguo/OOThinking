#ifndef WALL_H
#define WALL_H

#include<memory>

#include"side.h"

class Wall;
typedef std::shared_ptr<Wall> WallPtr;

class Wall : public Side
{
public:
    Wall();
    Wall(const Wall& other);
    WallPtr Clone() const;
};



#endif // WALL_H
