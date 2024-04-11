#include <iostream>
using namespace std;
#include <bits/stdc++.h>
// deltype
// inspects del type of type and expectation
// extract the type from the operator

int main()
{
    int x = 2;
    decltype(x) a = x+ 2;
    cout << typeid(x).name() << endl;
    return 0;
}