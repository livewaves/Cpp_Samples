// usage of set and traversing into it using an iterator
#include <iostream>
using namespace std;
#include <bits/stdc++.h>


int main()
{
    set<string> a;
    a.insert({"Umair", "Khan", "Tutorials"});
    for(auto b =a.begin(); b !=a.end(); b++)
    {
        cout << *b << endl;     // dereferencing an ierator
    }
    return 0;
}

