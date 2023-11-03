#include <iostream>
#include "pointer.hpp"

// point: Use two kind of example with reference and pointers:
// 1. swap (pass-by-...)
int main(){

    int a = 5;
    int b = 10;
    
    std::cout << "Number value before: ";
    std::cout << "A: " << a <<" B: " << b;
    std::cout << "\n";

    point pointer;
    pointer.swapPtr(&a,&b);

    std::cout << "Number value after: ";
    std::cout << "A: " << a <<" B: " << b;
    
    return 0;
}