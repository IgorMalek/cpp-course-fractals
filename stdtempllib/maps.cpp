#include <iostream>
#include <map>

using namespace std;

class Person
{
private:
    string name;
    int age;
public:
    Person(): name(""), age(0)
    {
    }
    Person(const Person &other)
    {
        cout << "Copy constructor running!" << endl;
        name = other.name;
        age = other.age;
    }
    Person(string name, int age):
        name(name), age(age) 
    {
    }
    void print() const
    {
        cout << name << ": " << age << endl;
    }
    // bool operator<(const Person &other) const
    // {
    //     if (name == other.name)
    //     {
    //         return age < other.age;
    //     }
    //     else
    //     {
    //         return name < other.name;
    //     }
    // }
};

int main()
{
    map<int, Person> people;
    people[0] = Person("Mike", 40);
    people[1] = Person("Mike", 444);
    people[2] = Person("Sue", 30);
    people[3] = Person("Raj", 20);


    for (map<int, Person>::iterator it = people.begin(); it != people.end(); ++it)
    {
        cout << it->second << ": " << flush;
        it->first.print();
    }

    // for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++)
    // {
    //     pair<string, int> age = *it;

    //     cout << age.first << ": " << age.second << endl;
    // }

    // if (ages.find("Vicky") != ages.end())
    // {
    //     cout << "Found Vicky" << endl;
    // }
    // else
    // {
    //     cout << "Key not found" << endl;
    // }
    return 0;
}