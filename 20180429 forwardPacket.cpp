#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

/*
 * 判断类型是左值引用还是右值引用。
 * 用法：
 * showType<decltype(t)>("Type of t");
 */

template<typename T>
void showType(const char* msg){
    cout << msg << ":";
    if(std::is_lvalue_reference<T>::value){
        cout << "lvalue_ref,";
    }
    if(std::is_rvalue_reference<T>::value){
        cout << "rvalue_ref,";
    }
    if(std::is_integral<T>::value){
        cout << "intergral,";
    }
    cout << endl;
}

class Segment
{
public:
    Segment() = default;
    virtual ~Segment() = default;
    virtual ostream& output(ostream& os) const = 0;
};

ostream& operator<<(ostream& os, const Segment& seg)
{
    return seg.output(os);
}

class StringSegment : public Segment
{
public:
    StringSegment(string&& str)
        :m_msg(std::forward<string>(str))
    {
    }
    StringSegment(string& str)
        :m_msg(str)
    {
    }
    virtual ~StringSegment() = default;
    ostream& output(ostream& os) const
    {
        os << m_msg;
        return os;
    }
private:
    string m_msg;
};


class IntSegment : public Segment
{
public:
    IntSegment(int t)
        :m_value(t)
    {
    }
    virtual ~IntSegment() = default;
    ostream& output(ostream& os) const
    {
        os << m_value;
        return os;
    }
private:
    int m_value;
};

class MsgHolder
{
public:
    MsgHolder()=default;
    ~MsgHolder(){
        while(m_segs.size()>0){
            Segment* s = m_segs.back();
            m_segs.pop_back();
            delete s;
        }
    }
    template<typename T>
    void add(T&& msg){
        m_segs.push_back(new StringSegment(std::forward<T>(msg)));
    }
    void add(int value)
    {
        m_segs.push_back(new IntSegment(value));
    }

    ostream& output(ostream& os) const
    {
        for(auto seg:m_segs){
            os << (*seg);
        }
        return os;
    }
private:
    vector<Segment*> m_segs;
};

ostream& operator<<(ostream& os, const MsgHolder& holder)
{
    return holder.output(os);
}

template<typename T>
void merge(MsgHolder& mh, T&& t)
{
    mh.add(std::forward<T>(t));
}

template<typename T, typename... Args>
void merge(MsgHolder& mh, T&& t, Args&&... rest){
    merge(mh, std::forward<T>(t));
    merge(mh, std::forward<Args>(rest)...);
}

void rvalue(string&& s){
    string t = std::move(s);
    cout << t << endl;
}

int main()
{
    MsgHolder mh;
    string ltest("LValue Test.");
    string rtest("RValue Test.");

    //ltest：左值引用，rtest:右值引用
    merge(mh, 2, " test of ", ltest, " and ", std::move(rtest));

    //拷贝操作，ltest内容不变。输出：ltest=LValue Test.
    cout << "ltest=" << ltest << endl;

    //移动操作，rtest内容被移除。输出：rtest=
    cout << "rtest=" << rtest << endl;

    //输出：mh=2 test of LValue Test. and RValue Test.
    cout << "mh=" << mh << endl;

    return 0;
}
