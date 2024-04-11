#include <iostream>
using namespace std;
#include <bits/stdc++.h>

template<class A, class B>
auto min(A a, B b) -> decltype(a<b ?a :b)
{
    return (a<b) ? a:b;
}

int main()
{
    cout << min(3, 4.5) << endl;
    return 0;
}