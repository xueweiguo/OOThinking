#include <iostream>
#include "userclass.h"
#include "importantclass.h"

using namespace std;

UserClass::UserClass()
{
    ip = new ImportantClass();
}

void UserClass::doSomething()
{
    cout << "UserClass::doSomething() Begin." << endl;
    ip->doWork();
    cout << "UserClass::doSomething() End." << endl;
}

UserClass::~UserClass()
{
    delete ip;
}
