// erase
#include <iostream>
using namespace std;
#include <map>

int main()
{
    multimap<int, int> mp;
    mp.insert({2, 10});
    mp.insert({1, 20});
    mp.insert({3, 30});
    mp.insert({1, 40});
    mp.erase(1);
    for (auto itr  = mp.find(2); itr!=mp.end();itr++)
    {
        // cout << itr ->first << endl;
        // cout << itr ->second<< endl;
        cout << itr ->first << "    ";
        cout << itr ->second<< endl;        
    }
}