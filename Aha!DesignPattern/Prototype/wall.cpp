#include "wall.h"

Wall::Wall()
{

}

Wall::Wall(const Wall& other)
{

}

WallPtr Wall::Clone() const
{
    return std::make_shared<Wall>(*this);
}
