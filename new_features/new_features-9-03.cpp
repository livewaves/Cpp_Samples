#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// deltype
// inspects del type of type and expectation
// extract the type from the operator

int a()
{
    return 2;
}

char b()
{
    return 'g';
}

int main()
{
    decltype(a()) x;
    decltype(b()) y;
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
}