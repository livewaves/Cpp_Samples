// multimap emplace
#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    multimap <int, int> mp;
    mp.emplace(2, 30);
    mp.emplace(1, 20);
    mp.emplace(2, 40);
    mp.emplace(3, 15);
    mp.emplace(2, 13);

    for(auto itr=mp.begin(); itr!=mp.end(); itr++)
    {
        cout << itr -> first << "   ";
        cout << itr -> second <<endl; 
    }
}