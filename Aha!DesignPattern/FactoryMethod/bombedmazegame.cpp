#include "bombedmazegame.h"
#include "bombedwall.h"
#include "roomwithabomb.h"

BombedMazeGame::BombedMazeGame()
{

}

WallPtr BombedMazeGame::MakeWall() const
{
    return std::make_shared<BombedWall>();
}
RoomPtr BombedMazeGame::MakeRoom(int n) const
{
    return std::make_shared<RoomWithABomb>(n);
}
