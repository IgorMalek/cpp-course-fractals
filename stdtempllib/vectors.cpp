#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<string> strings;
    strings.push_back("one");
    strings.push_back("two");
    strings.push_back("three");
    strings.push_back("four");

    for (int i = 0; i < strings.size(); i++)
    {
        cout << strings[i] << endl;
    }

    vector<string>::iterator it = strings.begin();

    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
    {
        cout << *it << endl;
    }

    vector<string>::iterator it2 = strings.begin();
    it2 += 2;
    cout << *it2 << endl;
    

    return 0;
}