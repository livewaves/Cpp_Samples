// unnamed namespaces
#include <iostream>
using namespace std;

namespace 
{
    int x = 10;
}

// we can use unnamed namespaces. they are considered as global vars
// but if we define another global var with the same name (x), ERROR

// int x= 12;

int main()
{
    cout << x << endl;
}