#include <iostream>

using namespace std;

class Parent
{
    int dogs;
    string text{ "Hello"};
public:
    Parent (): Parent("Hello")
    {
        dogs = 5;
        cout << "No parameter parent constructor" << endl;
    }

    Parent(string text)
    {
        dogs = 5;
        this->text = text;
        cout << "String parent constructor" << endl;
    }
};

class Child: public Parent
{
public:
    Child() = default;
    {
        cout << "No parameter child constructor" << endl;
    }
};

int main()
{
    Parent parent("Hello");
    Child child;

    return 0;
}












