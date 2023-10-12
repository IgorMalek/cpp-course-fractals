#ifndef RING_H
#define RING_H
#include <iostream>
#include <string>

using namespace std;

#pragma once

template<class T>
class ring
{
private:
    int m_pos;
    int m_size;
    T *m_values;
public:
    ring(int size) : m_pos(0), m_size(size), m_values(NULL)
    {
        m_values = new T[size];
    }
    int size ()
    {
        return m_size;
    }
    void add(T value)
    {
        m_values[m_pos++] = value;

        if (m_pos == m_size)
        {
            m_pos = 0;
        }
    }
    T &get(int pos)
    {
        return m_values[pos];
    }
public:
    class iterator
    {
    public:
    iterator(int pos, ring &aRing) : m_pos(pos), m_ring(aRing)
    {

    }

    iterator &operator++(int)
    {
        m_pos++;
        return *this;
    
    };

    iterator &operator++()
    {
        m_pos++;
        return *this;
    };

    T &operator*()
    {
        return m_ring.get(m_pos);
    };

    bool operator!=(const iterator &other) const
    {
        return m_pos != other.m_pos;
    };
};

#endif