#include <iostream>
#include <string>

using namespace std;

void test(void (*pFunc)())
{
    pFunc();
}


int main()
{
    auto sum = [](int a, int b) { return a + b; };

    cout << sum(5, 6) << endl;

    test([]() { cout << "Hello" << endl; });

    return 0;
}