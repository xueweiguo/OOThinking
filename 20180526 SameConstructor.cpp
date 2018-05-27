#include <iostream>
#include <memory>

using namespace std;

struct Base1 {
    Base1() = default;
    Base1(int v):m_v(v){}
    int m_v = 0;
};

struct Base2 {
    Base2() = default;
    Base2(int v):m_value(v){}
    int m_value = 0;
};

//error: SubClass attempts to inherit SubClass::SubClass(int v)
//from both base classes
struct SubClass: public Base1, public Base2 {
    using Base1::Base1; // inherit constructors from Base1
    using Base2::Base2; // inherit constructors from Base2
    SubClass(int v)
        :Base1(v)
        ,Base2(v * 2)
    {

    }
};

int main()
{
    SubClass sc(1);
    cout << sc.m_v << "," << sc.m_value << endl;
    return 0;
}
