#include "MyVector.h"
#include <iostream>
using std::cout;

int main(){
    MyVector<int> m;
    m.push_back(1);
    m.push_back(2);
    m.push_back(3);
    m.push_back(4);
    m.push_back(5);
    m.pop_back(1);
    m.clear();
    m[3] = 9;
    cout << m.capacity() << "\n";
    cout << m.empty() << "\n";
    cout << m[3] << "\n";
    return 0;
}


