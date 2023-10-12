#include <iostream>
#include <memory>
using namespace std;

class Test {
public: 
    Test ()
    {
        cout << "Created" << endl;
    }

    void greet()
    {
        cout << "Hello" << endl;
    }

    ~Test()
    {
        cout << "Destroyed" << endl;
    }
};

int main()
{

    shared_ptr<Test> pTest2(nullptr);
    cout << "0" << endl;
    {
    shared_ptr<Test> pTest1 = make_shared<Test>();
    cout << "1" << endl;
    pTest2 = pTest1;

    }

    cout << "Finished" << endl;
    return 0;
}
