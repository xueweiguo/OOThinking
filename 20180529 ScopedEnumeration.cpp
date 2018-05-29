#include <iostream>

using namespace std;

enum LightColor{
    red,
    green,
    blue
};

/*
enum PaintColor{
    red,
    yellow,
    blue
};
*/

namespace Light{
    enum Color{
        red,
        green,
        blue
    };
}

namespace Paint{
    enum Color{
        red,
        yellow,
        blue
    };
}


enum class ELight{
    red,
    green,
    blue
};

enum class EPaint{
    red,
    yellow,
    blue
};

int main()
{
    LightColor lc = red;
  //PaintColor pc = red;

    Light::Color Lc = Light::red;
    Paint::Color Pc = Paint::red;

    ELight elc = ELight::red;
    EPaint epc = EPaint::red;

    return 0;
}
