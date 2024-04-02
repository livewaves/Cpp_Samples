// implicit initialization of object to return values
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class A
{
    int x;
    int y;

    public:
        A(int a, int b)
        :x(a), y(b) {}
        
        void print()
        {
            cout << x << endl;
            cout << y << endl;
        }
};

        A f(int x, int y)
        {
            return {x, y};
        }

int main()
{
    A x = f(1, 2);
    x.print();
    return 0;
}