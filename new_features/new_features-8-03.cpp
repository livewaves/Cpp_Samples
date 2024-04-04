// function of the use of overloading and references to handle both lvalues and rvalues
#include <iostream>
using namespace std;

void A(const int& value)
{
    cout << "lvalue " << value << endl;
}

void A(int && value)
{
    cout << "rvalue " << value << endl;
}

int B()
{
    int temp_value = 10;
    return temp_value;
}

int main()
{
    int i = 11;
    A(i);
    A(B());
    return 0;
}