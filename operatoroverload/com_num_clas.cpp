#include "complex.h"
#include <iostream>

using namespace std;
using namespace complexnumber;

int main()
{

    Complex c1(2,3);
    Complex c2(3,4);
    Complex c3 = c2;

    cout << c1 << ": " << c3 << endl;
    return 0;

}   