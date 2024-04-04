// usage of auto keyword and typeid 
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// automatic type decleration and decleration type
// auto keyword
// if return type is auto, it is determined based on return var of the function

int main()
{
    auto x = 1;
    auto y = 2;
    auto ptr = &x;
    cout << typeid(x).name() << endl;
    cout << typeid(y).name() << endl;
    cout << typeid(ptr).name() << endl;
    return 0;
}

