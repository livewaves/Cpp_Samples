// type conversion ambiguity
#include <iostream>
using namespace std;

//all float constants are treated as double
// if double j input in fun is modified to float,
// there will be a type conversion ambiguity for compiler 
void fun(int i)
{
    cout << i << endl;
}

void fun(double j)
{
    cout << j << endl;
}

int main()
{
    fun(12);
    fun(1.2);
    return 0;
}