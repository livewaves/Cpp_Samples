// lvalue and rvalue demonstration
#include <iostream>
using namespace std;
// lvalue is an expression that preserves temporary objects
void f(int &i)
{
    cout << "lvalue reference: " << i << endl;
}

void f(int && i)
{
    cout << "rvalue reference: " << i << endl;
}

int main()
{
    int i = 10;
    f(i);               // i has a certain location; calling lvalue
    f(99);              // 99 does not have a location; it's an unnamed var. So, rvalue is called
    f(move(i));         // move(i) takes rvalue as input.
    
}