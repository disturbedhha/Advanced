#include "pointer.hpp"

point::point(){
    std::cout << "Constructor called" << std::endl;
}
point::~point(){
    std::cout << "\nDestructor called" << std::endl;
}

void point::swapRef(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
// Must use * to derefence the pointer
void point::swapPtr(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
