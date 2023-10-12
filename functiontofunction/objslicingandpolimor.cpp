#include <iostream>
#include <vector>
#include <algorithm>

class Parent {
private:
    int one;


public:
    Parent(): one(0)
    {
    }

    Parent(const Parent &other): one(0) {
        one = other.one;
        std::cout << "copy parent" << std::endl;
    }

    virtual void speak() {
        std::cout << "parent!" << std::endl;
    }

    virtual ~Parent() {}

};

class Child : public Parent {
private:
    int two;

public:
    Child(): two(0)
    {

    }

    void speak() {
        std::cout << "child!" << std::endl;
    }
};

int main()
{
    Child c1;
    Parent &p1 = c1;
    p1.speak();

    Parent p2 = Child();
    p2.speak();

    return 0;
}