#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool match(string test) {
    return test.size() == 3;
}

/**
 * Counts the number of strings in a vector that match a given condition.
 * 
 * @param texts The vector of strings to search through.
 * @param match A function pointer to a boolean function that takes a string argument and returns true if the string matches the desired condition.
 * @return The number of strings in the vector that match the given condition.
 */

int countStrings(vector<string> &texts, bool (*match)(string test)) {
    int tally = 0;
    for (int i = 0; i < texts.size(); i++) {
        if (match(texts[i])) {
            tally++;
        }
    }
    return tally;
}


int main()
{
    vector<string> texts;
    texts.push_back("one");
    texts.push_back("two");
    texts.push_back("three");
    texts.push_back("four");
    texts.push_back("one");
    texts.push_back("one");
    texts.push_back("two");

    cout << match("one") << endl; 

    cout << count_if(texts.begin(), texts.end(), match) << endl;

    cout << countStrings(texts, match) << endl;

    return 0;
}