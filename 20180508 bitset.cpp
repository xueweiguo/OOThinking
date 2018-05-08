#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
    //构造16位的b1,每位的值都为0.
    bitset<16> b1;
    cout << "b1=" << b1.to_string() << endl;

    //使用unsigned long long构造70位的b2
    //超出的部分，以0初始化
    bitset<70> b2(0x1234567890ABCDEF);
    cout << "b2=" <<b2.to_string() << endl;

    //从字符串的子串构造bitset,
    //使用第2个字符开始的4位
    string str1("01010011");
    bitset<8> b3(str1, 2, 4);
    cout << "b3=" <<b3.to_string() << endl;

    //从字符串的子串构造bitset,
    //使用第0个字符开始的8位
    //将'A'转换0，将'B'转换为1
    string str2("ABABBAA");
    bitset<8> b4(str2, 0, 8, 'A', 'B');
    cout << "b4=" << b4.to_string() << endl;


    bitset<4> t1(0x02);
    bitset<6> t2(0x2f);
    bitset<8> t3(0x00);

    //测试是否存在1
    cout << "any?" << t1.any() << t2.any() << t3.any() <<endl;
    //测试是否都是1
    cout << "all?" << t1.all() << t2.all() << t3.all() <<endl;
    //测试是否没有1
    cout << "none?" << t1.none() << t2.none() << t3.none() << endl;
    //取得bitset长度
    cout << "size=" << t1.size() << t2.size() << t3.size() << endl;
    //使用两种形式取得指定位的状态
    cout << "t1[1][0]=" << t1.test(1) << "," << t1[0] << endl;

    bitset<8> bt;
    cout << "bt=" << bt.to_string() << endl;
    //指定位置置位
    bt.set(2);
    cout << "bt.set(2)=" << bt.to_string() << endl;
    //全部置位
    bt.set();
    cout << "bt.set()=" << bt.to_string() << endl;
    //指定位置复位
    bt.reset(3);
    cout << "bt.reset(3)=" << bt.to_string() << endl;
    //全部复位
    bt.reset();
    cout << "bt.reset()=" << bt.to_string() << endl;
    //指定位置翻转
    bt.flip(3);
    cout << "bt.flip(3)=" << bt.to_string() << endl;
    //全部翻转
    bt.flip();
    cout << "bt.flip()=" << bt.to_string() << endl;



    bitset<64> llbt(0x01234567890ABCDEF);
    //输出ulonglong
    cout << "to_ullong=" << llbt.to_ullong() << endl;
    bitset<32> lbt(0x01234567);
    //输出ulong
    cout << "to_ulong=" << lbt.to_ulong() << endl;
    //输出字符串，0输出为O，1出处I
    cout << lbt.to_string('O','I') << endl;



    return 0;
}
