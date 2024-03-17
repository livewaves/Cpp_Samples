// cend
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    multimap<int, int> mp;
    mp.insert({2, 20});
    mp.insert({1, 10});
    mp.insert({3, 15});
    mp.insert({2, 30});
    mp.insert({1, 14});

    auto iter=mp.cend();
    cout << "The last element is " << iter -> first << endl << endl << endl;

    for (auto ite = mp.cbegin(); ite !=mp.cend(); ++ite)
    {
        cout << ite -> first << "   " << ite -> second << endl; 
    }    
}