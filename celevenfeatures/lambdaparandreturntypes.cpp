#include <iostream>
#include <string>

using namespace std;

void testGreeter(void (*pFunc)(string))
{
    pFunc("Sike");
}



int main()
{

    auto sum = [](int a, int b) -> int { return a + b; };

    cout << sum(5, 6) << endl;

    testGreeter([](string name) { cout << "Hello " << name << endl; });


    auto pDivide = [](double a, double b) -> double {
        if (b == 0.0)
        {
            return 0;
        }
        return a / b;
    };

    cout << pDivide(10.0, 5.0) << endl;
    cout << pDivide(10.0, 0.0) << endl;
    


    return 0;


}