#include <iostream>
#include <string>

using namespace std;

void f1() noexcept(true);
void f2() noexcept(false);

template<typename T>
void fun(T& t1, T& t2) noexcept(is_pod<T>::value){
    t1 = t2;
}

void fun1(int a, int b) noexcept(noexcept(fun(a,b))){
    fun(a, b);
}

void fun2(string& a,string& b) noexcept(noexcept(fun(a,b))){
    fun(a, b);
}

int main()
{
    int i1 = 0;
    int i2 = 1;
    cout << boolalpha << noexcept(fun(i1, i2)) << endl;
    string s1;
    string s2;
    cout << boolalpha << noexcept(fun(s1, s2)) << endl;

    cout << boolalpha << noexcept(fun1(i1, i2)) << endl;

    cout << boolalpha << noexcept(fun2(s1, s2)) << endl;
    return 0;
}
