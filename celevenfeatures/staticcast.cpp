#include <iostream>
using namespace std;

class Parent{

};

class Brother: public Parent{

};

class Sister: public Parent{

};

int main()
{
    Parent parent;
    Brother brother;

    // float value = 3.23;
    // cout << static_cast<int>(value) << endl;
    // Parent *ppb = &brother;
    // Brother *pbb = static_cast<Brother *>(&parent);
    Parent *ppb = &brother;
    Brother *pbb = static_cast<Brother *>(ppb);

    if (pbb == nullptr)
    {
        cout << "Invalid cast" << endl;
    }
    else
    {
        cout << pbb << endl;
    }



    return 0;
}