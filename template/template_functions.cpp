#include <iostream>
using namespace std;

// Function without template
int add(int a, int b) {
    return a + b;
}

// Function with template
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    int x = 5, y = 6;
    double p = 5.5, q = 6.6;
    string s1 = "5", s2 = "6";

    // Call function without template
    cout << "Adding strings without template: " << add(stoi(s1), stoi(s2)) << endl;

    // Call function with template
    cout << "Adding strings with template: " << add<string>(s1, s2) << endl;

    return 0;
}