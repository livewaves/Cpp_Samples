// emplace hint
#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    map <int, int> mp;
    mp.emplace_hint(mp.begin(), 2, 10);
    mp.emplace_hint(mp.begin(), 1, 20);
    mp.emplace_hint(mp.begin(), 2, 30);
    mp.emplace_hint(mp.begin(), 1, 40);
    mp.emplace_hint(mp.begin(), 1, 50);
    

    for(auto itr=mp.begin(); itr!=mp.end(); itr++)
    {
        cout << itr -> first << "   ";
        cout << itr -> second <<endl; 
    }
}