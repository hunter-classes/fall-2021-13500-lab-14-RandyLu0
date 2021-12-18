#pragma once
#ifndef INC_14_MYVECTOR_H
#define INC_14_MYVECTOR_H

#include <iostream>
using std::cout;

template<class T>
class MyVector {
public:
    MyVector();
    ~MyVector();
    int size();
    int capacity();
    bool empty();
    void push_back(T item);
    void pop_back(int n);
    void pop_back();
    void clear();
    T &operator[] (int i);

private:
    int s;
    int c;
    T* vector;
};

#include "MyVector.cxx"
#endif //INC_14_MYVECTOR_H



