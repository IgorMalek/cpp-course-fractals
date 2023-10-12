#include <iostream>
#include <functional>


using namespace std;
using namespace std::placeholders;

int add(int a, int b, int c)
{
    cout << a << " " << b << " " << c << endl;
    return a + b + c;
}

int main()
{
    auto bindFunc = bind(add, _2, _1, 100);
    cout << bindFunc(1, 2) << endl;




    return 0;
}