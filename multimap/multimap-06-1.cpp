// multimap lower bound
// double check the video
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    multimap <int, int> mp;
    mp.insert({1, 23});
    mp.insert({2, 10});
    mp.insert({1, 30});
    mp.insert({3, 22});
    mp.insert({1, 32});

    auto it = mp.lower_bound(2);
    cout << "The lower bound of 2 is ";
    cout << (*it).first << "    " << (*it).second << endl;
}