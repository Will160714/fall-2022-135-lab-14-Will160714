#pragma once
#include <string>

template <class T>

class MyVector{
    public:
        MyVector();
        void print();
        MyVector(int x);
        T& copy(T& info, int cap);
        int size();
        int capacity();
        bool empty();
        void push_back(T x);
        void pop_back(int n);
        void pop_back();
        void clear();
        T &operator[](int n);

    private:
        int size_of_array;
        int capacity_of_array;
        T *data;
};

#include "MyVector.cxx"