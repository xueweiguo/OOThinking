#include <iostream>

using namespace std;

enum enum_1{
    e1_v1,
    e1_v2
};

void size_e1(){
    //输出结果：enum_1_size=4
    cout << "enum_1_size=" << sizeof(enum_1) << endl;
}

enum enum_2{
    e2_v1 = 0x123456789,
    e2_v2
};

void size_e2(){
    //输出结果：enum_2_size=8
    cout << "enum_2_size=" << sizeof(enum_2) << endl;
}

enum class scope_enum_1{
    se1_v1,
    se1_v2
};

void size_se1(){
    //输出结果：senum_1_size=4
    cout << "senum_1_size=" << sizeof(scope_enum_1) << endl;
}

enum class scope_enum_2 : long long{
    se2_v1 = 0x123456789,
    se2_v2
};

void size_se2(){
    //输出结果：senum_2_size=8
    cout << "senum_2_size=" << sizeof(scope_enum_2) << endl;
}

int main()
{
    size_e1();
    size_e2();
    size_se1();
    size_se2();
    return 0;
}
