// multimap size
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    multimap <int, int> mp;
    mp.insert({2, 10});
    mp.insert({1, 12});
    mp.insert({3, 13});
    mp.insert({1, 14});
    mp.insert({2, 15});
    cout <<"multimap mp has " << mp.size() << "number of elements" << endl;

}