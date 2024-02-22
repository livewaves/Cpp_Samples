// passing by reference with pointers

// pointer to functions
#include <iostream>
using namespace std;

void swap(int *, int *);

int main()
{
    int a = 1, b=2;
    swap(&a, &b);
    cout << "a is : " << a << endl;
    cout << "b is : " << b << endl;

}

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}