#include "MyVector.h"

template<class T>
MyVector<T>::MyVector(){
    s = 0;
    vector = new T[c = 1];
}

template<class T>
MyVector<T>::~MyVector(){
    delete[] vector;
    vector = nullptr;
}

template<class T>
int MyVector<T>::size() { return s; }

template<class T>
int MyVector<T>::capacity() { return c; }

template<class T>
bool MyVector<T>::empty() { return !s; }

template<class T>
void MyVector<T>::push_back(T item){
    if(s >= c){
        T* v = new T[c *= 2];
        for(int i = 0; i < s; ++i) v[i] = vector[i];
        delete[] vector;
        vector = nullptr;
        vector = v;
    }
    vector[s++] = item;
}

template<class T>
void MyVector<T>::pop_back() { if(s > 0) --s; }

template<class T>
void MyVector<T>::pop_back(int n){
    if(n < s and n >= 0) {
        for (int i = n; i < s - 1; ++i)
            vector[i] = vector[i + 1];
        --s;
    }
}

template<class T>
void MyVector<T>::clear() { s = 0; }

template<class T>
T &MyVector<T>::operator[](int i) { return vector[i]; }
