#include <iostream>






ostream &operator<<(ostream &out, const Test &test)
{
    out << "Hello from test";
    return out;
}


Test getTest()
{
    return Test();
}

int main()
{
    Test test1 = getTest();

    cout << test1 << endl;

    vector<Test> vec;
    vec.push_back(Test());

    int value1 = 7;
    int *pValue1 = &value1;
    // int *pValue2 = &7; // error: cannot take the address of an rvalue of type 'int'

    Test *pTest1 = &test1;
    // Test *pTest2 = &getTest(); // error: cannot take the address of an rvalue of type 'Test'

    int *pValue3 = &++value1;
    cout << *pValue3 << endl;

    // int *pValue4 = &value1++; // error: cannot take the address of an rvalue of type 'int'

    
    

    return 0;
}