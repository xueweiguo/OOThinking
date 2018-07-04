#include <memory>
#include "bombedmazefactory.h"
#include "bombedwall.h"
#include "roomwithabomb.h"

using namespace std;

BombedMazeFactory::BombedMazeFactory()
{

}

WallPtr BombedMazeFactory::MakeWall() const
{
    return make_shared<BombedWall>();
}

RoomPtr BombedMazeFactory::MakeRoom(int n) const
{
    return make_shared<RoomWithABomb>(n);
}
