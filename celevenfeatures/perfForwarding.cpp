#include <iostream>
using namespace std;

class Test 
{

};

template<typename T>
void call(T &&arg)
{
    check(forward<T>(arg));
}

void check(Test &test)
{
    cout << "Lvalue function" << endl;
}

void check(Test &&test)
{
    cout << "Rvalue function" << endl;
}

int main()
{
    Test test;

    call(test);



    return 0;
}
