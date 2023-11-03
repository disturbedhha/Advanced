#include <iostream>

#ifndef POINTER_HPP
#define POINTER_HPP

class point{
    public:
    // constructor
    point();
    // destructor
    ~point();

    // swap with reference
    void swapRef(int &a, int &b);
    // swap with pointer
    void swapPtr(int *a ,int *b);

    // pass by reference
    void passRef(int a);
    // pass by pointer
    void passPtr(int *a);
};

#endif //POINTER_HPP
