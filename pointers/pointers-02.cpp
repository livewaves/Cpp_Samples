// pointer to void
#include <iostream>
using namespace std;

// it is not allowed to point to a double address using an int pointer
// #####
    // int *p;
    // double d = 10;
    // p = &d;
// #####

// so, void pointers are utilized because they are general purpose pointers
// we can point to any types through them. 

int main()
{
    void *p;
    double d = 10;
    p = &d;
    cout << p << endl;
}

// in order to dereference void pointer,
// casting them to the specific data type the pointer points to is required.
// #####
    // int x = 10;
    // void *ptr = &x; // ptr points to an integer

    // // Now, you want to access the value pointed to by ptr.
    // // You need to cast ptr to the correct type before dereferencing it.
    // int *intPtr = static_cast<int*>(ptr);

    // // Now you can dereference intPtr to access the value pointed to by ptr
    // std::cout << *intPtr << std::endl; // This prints 10
// #####