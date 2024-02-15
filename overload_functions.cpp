#include <iostream>
using namespace std;

// save memory space
// code readibility

void x(int a);
void x(float b);

int main()
{
    float b = 4.5;
    x(4);
    x(b);
    x(5);
}

void x(int a)
{
    cout << "Integer Function called" << endl;
}

void x(float b)
{
    cout << "Float Function called" << endl;
}