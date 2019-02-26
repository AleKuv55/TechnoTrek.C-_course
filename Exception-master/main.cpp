#include <iostream>
#include "Snowball.h"

using namespace std;

int function_0();
int function_1();
int function_2();

int main() {

    try {
        function_0();
    }
    catch (Snowball* snowball)
    {
        snowball->Dump();
//        (*obj2).Dump();
    }
    catch (...){};
    return 0;

}

int function_0()
{
    try {
        function_1();
    }
    catch (Snowball* snowball)
    {
        if (1)
        {
            throw  new Snowball ("The first mistake", __LINE__, __PRETTY_FUNCTION__, __FILE__, snowball);
        }
    }
    return 0;
}

int function_1()
{
    try {
        function_2();
    }
    catch (Snowball* snowball)
    {
        if (1)
        {
            throw  new Snowball ("The second mistake", __LINE__, __PRETTY_FUNCTION__, __FILE__, snowball);
        }
    }
    return 0;
}

int function_2()
{
    if (1)
    {
        throw  new Snowball("Null Division", __LINE__, __PRETTY_FUNCTION__, __FILE__, nullptr);
    }
    return 0;
}