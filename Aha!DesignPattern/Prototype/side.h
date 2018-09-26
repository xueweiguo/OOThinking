#ifndef SIDE_H
#define SIDE_H

#include<memory>

class Side
{
public:
    Side();
    virtual ~Side();
};

typedef std::shared_ptr<Side> SidePtr;

#endif // SIDE_H
