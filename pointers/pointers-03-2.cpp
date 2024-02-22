// pointer to arrays
#include <iostream>
using namespace std;

// pointer is a variable that can hold the address of 
// array cells.

// *(arr + i); arr is translated as base address of the array

int main()
{
    float arr[5];
    float *ptr;

    cout << "enter 5 numbers : ";
    for(int i=0; i<5; i++)
    {
        cin >> *(arr + i);
    }

    for(int i=0; i<5; i++)
    {
        cout << *(arr + i) << endl;
    }
}