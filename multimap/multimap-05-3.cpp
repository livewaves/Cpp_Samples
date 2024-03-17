// Max Size multimap
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    multimap <int, int> mp, mp1;
    cout << "elements in container mp are " << mp.max_size() << endl;
    cout << "elements in container mp1 are " << mp1.max_size() << endl;
    return 0;
}