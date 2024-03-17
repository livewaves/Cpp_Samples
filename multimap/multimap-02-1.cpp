// map emplace
#include <iostream>
using namespace std;
#include<bits/stdc++.h>

int main()
{
    map <int, int> mp;
    mp.emplace(2, 10);
    mp.emplace(1, 20);
    mp.emplace(3, 30);
    mp.emplace(1, 40);
    mp.emplace(4, 15);

    for(auto itr=mp.begin(); itr!=mp.end(); itr++)
    {
        cout << itr -> first << "   ";
        cout << itr -> second <<endl; 
    }
}