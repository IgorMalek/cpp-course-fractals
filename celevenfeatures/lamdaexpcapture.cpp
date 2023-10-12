#include <iostream>
#include <string>

using namespace std;

int main()
{
    int one = 1;
    int two = 2;
    int three = 3;

    [one, two]() { cout << one << ", " << two << endl; }(); // [one, two] is the capture list

    [=](){cout << one << ", " << two << endl;}(); // [=] is the capture list
    
    [&](){three = 7; cout << one << ", " << two << endl;}(); // [&] is the capture list
    
    [&three](){three = 7; cout << three << endl;}(); // [&three] is the capture list

    [&, two, three](){one = 100; cout << one << ", " << two << ", " << three << endl;}(); // [&, two, three] is the capture list

    //[=, &two, &three](){one = 100; cout << one << ", " << two << ", " << three << endl;}(); // [=, &two, &three] is the capture list

    return 0;
}