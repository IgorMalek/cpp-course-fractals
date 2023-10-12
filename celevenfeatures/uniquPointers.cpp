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

class Temp
{
private:
    unique_ptr<Test[]> pTest;
public:
    Temp() : pTest(new Test[2])
    {

    }


};

int main()
{
    unique_ptr<Test> pTest(new Test);
    cout << "1" << endl;

    pTest->greet();
    cout << "2" << endl;

    unique_ptr<Test[]> pTest2(new Test[2]);
    cout << "3" << endl;

    pTest2[1].greet();
    cout << "4" << endl;

    cout << "Finished" << endl;
    cout << "5" << endl;

    return 0;
}
