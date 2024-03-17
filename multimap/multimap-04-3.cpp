// crbegin
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

    auto iter=mp.crbegin();
    cout << "The first element is " << iter -> first << "    "<< iter ->second << endl << endl;

    for (auto ite = mp.crbegin(); ite !=mp.crend(); ++ite)
    {
        cout << ite -> first << "   " << ite -> second << endl; 
    }    
}