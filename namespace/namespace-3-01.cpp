// extending the namespace
#include <iostream>
using namespace std;

namespace w
{
    int x = 10;
}

namespace w
{
    int y = 12;
}

int main()
{
    cout << w::x << endl;
    cout << w::y << endl;
}