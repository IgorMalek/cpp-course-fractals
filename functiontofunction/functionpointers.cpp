#include <iostream>
using namespace std;

void func1() {
    cout << "This is func1" << endl;
}


/**
 * This program demonstrates the use of function pointers in C++.
 * It declares a function pointer variable, assigns it to a function, and calls the function using the pointer.
 */
int main()
{
    void (*pfunc)() = func1;
    // Alternatively, you can use the address-of operator to assign the function pointer:
    // void (*pfunc)() = &func1;
    (*pfunc)(); // Call the function using the pointer

    return 0;
}