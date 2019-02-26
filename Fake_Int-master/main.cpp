
#include "Fuck_Int.h"
// This program is about "Fuck_Int" Oh, no
//
//       JUST FAKE_INT

int main()
{
    std::cout << "You have only " << n << " demo fnt using" << std::endl;

    //int x = 0;
    fnt y;
    fnt x;
    x = 3;
    std::cout << "x = " << x << std::endl;

    y = 7;
    y.dump();
    y = x;
    y.dump();

    y += 5;
    y.dump();

    y += x;
    y.dump();

    return 0;
}