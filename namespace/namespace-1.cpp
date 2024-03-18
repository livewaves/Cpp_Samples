#include <iostream>
using namespace std;

// namespace feature is only available in C++ (not C)

namespace w
{
    int x = 10;
}

namespace y
{
    int x = 11;
}

int main()
{
    int x = 2;
    cout << x << endl;
    cout << w::x << endl;
}