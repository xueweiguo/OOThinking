#include <iostream>
#include <functional>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct Tracer{
    Tracer(int v):value{v}{}
    bool compare(const Tracer& t) const{
        return (value < t.value);
    }
    int value;
};

bool compare(const Tracer& t1, const Tracer& t2){
    return t1.compare(t2);
}

int main()
{
    {
        vector<Tracer> tv{1, 5, 2, 4, 8};
        sort(tv.begin(), tv.end(), compare);
        for(auto s : tv){
            cout << s.value << endl;
        }
    }

    {
        function<bool(const Tracer&,const Tracer&)> tcomp = &Tracer::compare;
        Tracer t1(1);
        Tracer t2(2);
        cout << tcomp(t1, t2) << endl;
    }

    {
        vector<Tracer> tv{1, 5, 2, 4, 8};
        function<bool(const Tracer&,const Tracer&)> tcomp = &Tracer::compare;
        sort(tv.begin(), tv.end(), tcomp);
        for(auto s : tv){
            cout << s.value << endl;
        }
    }
    {
        vector<Tracer> tv{1, 5, 2, 4, 8};
        sort(tv.begin(), tv.end(), mem_fn(&Tracer::compare));
        for(auto s : tv){
            cout << s.value << endl;
        }
    }
    return 0;
}
