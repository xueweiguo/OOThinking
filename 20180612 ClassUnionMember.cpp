#include <iostream>
#include <string>
#include <random>
#include <memory>
#include <cstring>

using namespace std;

enum RandType{INT, DOUBLE};

default_random_engine e;
uniform_int_distribution<int> ui(0,9);
uniform_real_distribution<double> ud(0, 1);

string randString(RandType rt)
{
    union{
        int ival;
        double dval;
    };

    switch(rt){
    case INT:
        ival = ui(e);
        return to_string(ival);
        break;
    case DOUBLE:
        dval = ud(e);
        return to_string(dval);
        break;
    default:
        return string();
    }
}

void testRandString(){
    cout << randString(INT) << endl;
    cout << randString(DOUBLE) << endl;
    cout << randString(INT) << endl;
    cout << randString(DOUBLE) << endl;
}

struct IntValue{
    IntValue(int v):value(v){
        cout << "IntValue Const!" << endl;
    }
    ~IntValue(){
        value = 0;
        cout << "IntValue dest!" << endl;
    }
    int value;
};

void testConstDest(){
    allocator<IntValue> a;
    auto pv = a.allocate(1);
    IntValue* piv = new(pv)IntValue(2);
    cout << piv->value << endl;
    piv->~IntValue();
    a.deallocate(pv, 1);
}

class StrValue{
public:
    StrValue():str(nullptr){
        cout << "StrValue()" << endl;
    }
    StrValue(const char* s){
        cout << "StrValue(" << s << ")" << endl;
        str = new char[strlen(s) +1];
        strcpy(str, s);
    }
    StrValue(const StrValue& sv):StrValue(sv.str){}
    ~StrValue(){
        cout << "~StrValue()" << endl;
        if(str != nullptr){
            delete[] str;
            str = nullptr;
        }
    }
    StrValue& operator=(const StrValue& sv){
        if(&sv != this){
            cout << "operator=(" << sv.str << ")" << endl;
            str = new char[strlen(sv.str) +1];
            strcpy(str, sv.str);
        }
        return *this;
    }
private:
    friend ostream& operator<<(ostream &os, const StrValue& svalue);
    char* str = nullptr;
};

ostream& operator<<(ostream &os, const StrValue& svalue){
    if(svalue.str == nullptr){
        os << "NULLPTR";
    }
    else{
        os << svalue.str;
    }
    return os;
}

union RawUnion{
public:
    RawUnion(){

    }
    ~RawUnion(){

    }
    int ival;
    StrValue sval;
};

void testRawUnion(){
    RawUnion raw;
    raw.ival = 5;
    new (&raw.sval)StrValue("Hello!");
    cout << raw.sval << endl;
    raw.sval.~StrValue();
    raw.ival = 6;
}

class SmartUnion{
public:
    SmartUnion():SmartUnion(0){
        cout << "SmartUnion(),ut=" << ut << endl;
    }
    SmartUnion(int i):ut(INT),ival(i){
        cout << "SmartUnion(" << i << "),ut=" << ut << endl;
    }
    SmartUnion(const char* s):ut(STR),sval(s){
        cout << "SmartUnion(" << s << "),ut=" << ut << endl;
    }
    ~SmartUnion(){
        cout << "~SmartUnion(),ut=" << ut << endl;
        if(ut == STR) sval.~StrValue();
    }
    SmartUnion& operator=(const StrValue& sv){
        if(ut != STR){
            new (&sval)StrValue(sv);
            ut = STR;
        }
        else{
            sval = sv;
        }
        return *this;
    }
    SmartUnion& operator=(int iv){
        if(ut == STR){
            sval.~StrValue();
        }
        ival = iv;
        ut = INT;
        return *this;
    }
    SmartUnion& operator=(const SmartUnion& su){
        if(su.ut == STR){
            *this = su.sval;
        }
        else{
            *this = su.ival;
        }
        return *this;
    }
private:
    enum {INT, STR} ut;
    union{
        int ival;
        StrValue sval;
    };
};

void testSmartUnion(){
    cout << "testSmartUnion()" << endl;
    SmartUnion u1(2);
    SmartUnion u2("Hello");
    u1 = u2;
    u2 = 5;
}

int main()
{
    testRandString();
    testConstDest();
    testRawUnion();
    testSmartUnion();
    return 0;
}
