// nested namespaces
#include <iostream>
using namespace std;

namespace n1
{
    void func()
    {
        cout << "outside the namespace" << endl;
    }
    namespace n2
    {
        void func()
        {
            cout << "inside the namespace" << endl;
        }
    }
}

using namespace n1::n2;

int main()
{
    func();
}