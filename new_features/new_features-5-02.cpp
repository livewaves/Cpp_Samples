// delete specifiers
// delete is used to prevernt certain conversions and operations
#include <iostream>
using namespace std;

class A
{
    public:
        A(int a)
        {
        };
        A(double) = delete;                 // conversion has been disabled
        A & operator = (const A&) = delete;       // assignment OP has been disabled
};

int main()
{
    A a(10);        // correct
    // A b(3.14);   // not allowed, attempting to use the deleted constructor with a double argument
    // a = b;       // not allowed, attempting to use the deleted copy assignment operator
}