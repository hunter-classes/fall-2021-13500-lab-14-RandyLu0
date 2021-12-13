#include "MyVector.h"

template<class T>
MyVector<T>::MyVector(){
    s = 0;
    c = 1;
    vector = new T[c];
}

template<class T>
int MyVector<T>::size() { return s; }

template<class T>
int MyVector<T>::capacity() { return c; }

template<class T>
bool MyVector<T>::empty() { return !s; }

template<class T>
void MyVector<T>::push_back(T item){
    if(s < c) vector[s++] = item;
    else{
        T v[c];
        for (int i = 0; i < s; ++i) v[i] = vector[i];
        delete[] vector;
        vector = new T[c*= 2];
        for(int i = 0; i <  s; i++) vector[i] = v[i];
        vector[s++] = item;
    }
}

template<class T>
void MyVector<T>::pop_back() { --s; }

template<class T>
void MyVector<T>::pop_back(int n){
    if(n < s) {
        for (int i = n; i < s - 1; ++i)
            vector[i] = vector[i + 1];
        --s;
    }
}

template<class T>
void MyVector<T>::clear() {s = 0; }

template<class T>
T &MyVector<T>::operator[] (int i){ return vector[i]; }
