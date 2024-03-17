// count
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    multimap <int, int> mp;
    mp.insert({1, 10});
    mp.insert({2, 12});
    mp.insert({3, 41});
    mp.insert({1, 14});
    mp.insert({2, 16});
    mp.insert({3, 43});
    mp.insert({1, 13});
    mp.insert({2, 100});
    mp.insert({3, 44});
    mp.insert({2, 200});
     
    cout << "3 exists " << mp.count(3) << " times" << endl;
}