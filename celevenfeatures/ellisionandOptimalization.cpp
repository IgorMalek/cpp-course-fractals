#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test
{
private:
    static const int SIZE = 100;
    int *_pBuffer{nullptr};
public: 
    Test()
    {
        cout << "Constructor" << endl;
        _pBuffer = new int[SIZE]{}; // initialize all to zero

    }
    Test(int i)
    {
        cout << "Parameterized constructor" << endl;

        _pBuffer = new int[SIZE]{}; // initialize all to zero

        for (int i = 0; i < SIZE; i++)
        {
            _pBuffer[i] = 7 * i;
        }
    }

    Test(const Test &other)
    {
        cout << "Copy constructor" << endl;
        _pBuffer = new int[SIZE]{};
        memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int)); // deep co


    }

    Test &operator=(const Test &other)
    {
        cout << "Assignment" << endl;
        _pBuffer = new int[SIZE]{};

        memcpy(_pBuffer, other._pBuffer, SIZE * sizeof(int)); // deep co
        return *this;
    }

    ~Test()
    {
        cout << "Destructor" << endl;
        delete [] _pBuffer;
    }

    friend ostream &operator<<(ostream &os, const Test &test);

};

ostream &operator<<(ostream &out, const Test &test)
{
    out << "Hello from test";
    return out;
}

Test getTest()
{
    return Test();
}


int main()
{
    Test test1 = getTest();
    cout << test1 << endl;

    vector<Test> vec;
    vec.push_back(Test());

    return 0;
}



