// initialization of dynamically allocated array
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int* pi = new int[5]{1, 2, 3, 4, 5};
    for(int i=0; i<5; i++)
    {
        cout << *(pi + i);
    }
}