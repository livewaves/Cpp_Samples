// multimap equal range
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    multimap <int, int> mp;
    mp.insert({1, 20});
    mp.insert({2, 22});
    mp.insert({1, 10});
    mp.insert({1, 15});

    auto it = mp.equal_range(1);
    cout << "elements with the key = 1" << endl;
    for(auto itr = it.first; itr != it.second; ++itr)
    {
        cout << itr -> first << "   "<< itr ->second << endl;
    }
}