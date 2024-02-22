// pointer to arrays
#include <iostream>
using namespace std;

// pointer is a variable that can hold the address of 
// array cells.

int main()
{
    float arr[5];
    float *ptr;

    cout <<"display using arrays" << endl;
    for (int i=0; i<5; i++)
    {
        cout << &arr[i] << endl;
    }
    ptr = arr;
    cout << "display using pointers" << endl;
    for(int i=0; i<5 ; i++)
    {
        cout << i << ptr+i << endl;
    }
}