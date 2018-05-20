#include <iostream>

using namespace std;

class Error{

};

void testfun()
{
    throw Error{};
}

void testfun2() noexcept{
    try{
        testfun();
    }
    catch(Error){
        cout << "test error!" << endl;
    }
}

void testfun3()
{
    testfun();
}

void testfun4() noexcept{
    throw Error{};
}

int main()
{
    try{
        testfun4();
    }
    catch(Error){
        cout << "testfun4 error!" << endl;
    }
    return 0;
}

/*
int main()
{
    testfun2();
    try{
        testfun3();
    }
    catch(Error){
        cout << "test error!" << endl;
    }
    //testfun();
    return 0;
}
*/

