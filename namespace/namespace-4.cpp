// accessing to namespace
#include <iostream>
using namespace std;

namespace a
{
    void func()
    {
        cout << "namespace a" << endl;
    }
}

namespace b
{
    void func()
    {
        cout << "namespace b" << endl;
    }
    int x = 10;
}

using namespace b;
int main()
{
    func();
    cout << x << endl;
}