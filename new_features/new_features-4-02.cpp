// initialization of an array data member of a class
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class A
{
    int arr[4];
    public:
        A(int x, int y, int z, int w)   // insert these elements in the array
        : arr{x, y, z, w}{};            // constructor using initializer list (we used to use constructor body)

        void print()
        {
            for(int i=0; i<4; i++)
            {
                cout << *(arr + i) << endl;
            }
        }    
};

int main()
{
    A a(1, 2, 3, 4);
    a.print();
    return 0;
}