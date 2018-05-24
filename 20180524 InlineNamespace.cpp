#include <iostream>

using namespace std;

namespace std_namespace1{
    class Normal{
    public:
        void fun(int i)
        {
            cout << "std_namespace1::fun(" << i << ")" << endl;
        }
    };
}

namespace std_namespace2{
    class Normal{
    public:
        void fun(int i)
        {
            cout << "std_namespace2::fun("<< i << ")" << endl;
        }
    };
}

void test_std_namespace(){
    std_namespace1::Normal n1;
    n1.fun(1);

    std_namespace2::Normal n2;
    n2.fun(2);

    using namespace std_namespace1;
    Normal n11;
    n11.fun(11);
}

namespace inline_test{
    inline namespace inline_namespace1{
        class Inline1{
        public:
            int iv;
        };
    }

    namespace inline_namespace1{
        class Inline2{
        public:
            double dv;
        };
    }

    void test_inline_namespace(){
        Inline1 in1;
        in1.iv = 5;

        Inline2 in2;
        in2.dv = 2;
    }
}

void test_inline_namespace2(){
    inline_test::Inline1 in1;
    in1.iv = 5;

    inline_test::Inline2 in2;
    in2.dv = 2;
}

/*
class A{
public:
    void fun1(){}
};


class B{
public:
    void fun1(){}
};
*/

namespace ver1{
    class A{
    public:
        void fun1(){}
    };
}

namespace ver1{
    class B{
    public:
        void fun1(){}
    };
}

inline namespace ver2{
    class A{
    public:
        void fun2(){}
    };
}

namespace ver2{
    class B{
    public:
        void fun1(){}
    };
    class C{
    public:
        void fun3(){}
    };
}

/*
void inline_demo(){
    A a;
    a.fun1();
    B b;
    b.fun1();
}
*/

void inline_demo(){
    A a;
    a.fun2();
    B b;
    b.fun1();
    C c;
    c.fun3();

    ver1::A a1;
    a1.fun1();
}

int main()
{
    test_std_namespace();
    inline_test::test_inline_namespace();
    test_inline_namespace2();
    inline_demo();
}
