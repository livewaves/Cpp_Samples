// pointers introduction
#include <iostream>
using namespace std;

// reduce the code and improves performance
// multiple values and functions using pointer
// able us to access any memory location 

// if 'a' is a variable, '&a' locates the physical memory address in which a is stored
// pointer variables point to a specific address in memory
// we declare pointer using int *p or int* p
// '&' is reference operator and '*' is dereference operator
// '&' returns the address of the variable.
// to get the value stored in the memory address, we use '*'. 

// p in the example in below, shows the address.
// if we point to the stored content, it shows 
// the stored valued in the address
int main ()
{
    int x = 10;
    cout<< "address of x is : " << &x << endl;
    int *p;
    p = &x;
    cout << "the value inside the pointer is : " << p << endl;
    cout << "the stored value inside the memory address is before change : " << *p << endl;
    x = 20;
    cout << "the stored value inside the memory address is after change : " << *p << endl;    
}
