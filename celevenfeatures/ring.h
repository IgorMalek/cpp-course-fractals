#ifndef RING_H
#define RING_H
#include <iostream>
#include <string>

using namespace std;

#pragma once

template<class T>
class ring
{
public:
    class iterator
    {
    public:
        void print()
        {
            cout << "Hello from iterator: " << T() << endl;
        }
    };
};

#endif