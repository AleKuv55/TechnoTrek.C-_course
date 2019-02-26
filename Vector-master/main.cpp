#include <iostream>
#include "Vector.h"

int main() {
    Vector <int> v1(7);
    Vector <int> v2(7);





    for (int i = 0; i < 7; i++)
    {
        v2[i] = i + 1;
        v1[i] = i + 48;
    }
    cout << "v1" << endl;
    v1.dump();
    cout << "v2" << endl;
    v2.dump();

    v1 = v2 + v2  ;
    cout << "v1" << endl;
    v1.dump();
    //Vector <int> v3(v1+v2);
    //cout << "v3 = v1 + v2" << endl;
    //v3.dump();


    /*
    v1 = v2 + v2;
    cout << "v1 = + " << endl;
    v1.dump();
    cout << "v2" << endl;
    v2.dump();
    */


    return 0;
    /*
     * Vector a = 7;
     * Vector a(7);
     */
}
