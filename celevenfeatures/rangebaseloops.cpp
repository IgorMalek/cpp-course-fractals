#include <iostream>
#include <vector>

using namespace std;

/**
 * @brief Demonstrates the use of range-based loops in C++.
 * 
 * This program initializes different types of containers and iterates over them using range-based loops.
 * The containers used in this program are:
 * - std::initializer_list
 * - C-style array
 * - std::string
 * - std::vector
 */
int main()
{
    auto texts = {"one", "two", "three"};

    for (auto text : texts)
    {
        cout << text << endl;
    }

    cout << endl;

    int values[] = {1, 2, 3};

    for (auto value : values)
    {
        cout << value << endl;
    }

    cout << endl;
    
    string hello = "Hello";

    for (auto c : hello)
    {
        cout << c << endl;
    }

    cout << endl;

    vector<int> numbers = {1, 2, 3, 4, 5};

    for (auto number : numbers)
    {
        cout << number << endl;
    }


    return 0;
}