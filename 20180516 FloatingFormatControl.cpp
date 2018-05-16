#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    cout << showbase; //要求整数输出时生成前缀
    cout << "default:" << 20 << " " << 1024 << endl;
    cout << "oct:" << oct << 20 << " " << 1024 << endl;
    cout << "hex:" << hex << 20 << " " << 1024 << endl;
    cout << "dec:" << dec << 20 << " " << 1024 << endl;
    cout << noshowbase; //关闭整数输出时生成前缀

    cout << "default:" << cout.precision() << endl;
    cout << sqrt(2.0) << endl;
    cout.precision(10);
    cout << sqrt(2.0) << endl;
    cout.precision(6);

    cout << "default:" << sqrt(2.0) << endl;
    cout << "hexfloat:" << hexfloat << sqrt(2.0) << endl;
    cout << "default:" << defaultfloat << sqrt(2.0) << endl;

    return 0;
}
