// different types of references (const int&, const int&&,
// and int &&) to bind to the return value of a function
#include <iostream>
using namespace std;

// as x is a temporary value, return of A() is an rvalue
// we coould use a normal lvalue reference to bind temporary object if it is a constant
int A()
{
    int x = 2;
    return x;   
}

int main()
{
    cout << A() << endl;
    const int& val1 = A();        // constant lvalue reference
    const int&& val2 = A();       // contant rvalue reference
    int && val3 = A();            // int rvalue reference
    return 0;
}
