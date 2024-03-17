// multimap swap
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main()
{
    multimap <int, int> mp, mp1;
    mp.insert({2, 10});
    mp.insert({1, 12});
    mp.insert({3, 13});
    mp.insert({1, 14});
    mp.insert({2, 15});

    mp1.insert({2, 11});
    mp1.insert({1, 12});
    mp1.insert({3, 13});
    mp1.insert({1, 14});
    mp1.insert({2, 15});

    cout << "elements before the swap function is called " << endl << endl;
    cout << "elements of container mp" << endl;
    for(auto iter=mp.begin(); iter !=mp.end(); ++iter)
    {
        cout << iter -> first << "  " << iter ->second << endl;
    }
    cout << endl;
    cout << "elements of container mp1 " << endl; 
    for(auto iter=mp1.begin(); iter !=mp1.end(); ++iter)
    {
        cout << iter -> first << "  " << iter ->second << endl;
    }    

    mp.swap(mp1);
    cout << "elements of container mp" << endl;
    for(auto iter=mp.begin(); iter !=mp.end(); ++iter)
    {
        cout << iter -> first << "  " << iter ->second << endl;
    }
    cout << endl;
    cout << "elements after the swap function" << endl;
    cout << "elements of container mp1 " << endl; 
    for(auto iter=mp1.begin(); iter !=mp1.end(); ++iter)
    {
        cout << iter -> first << "  " << iter ->second << endl;
    }    


}