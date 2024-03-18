// alias namespace
#include <iostream>
using namespace std;

namespace s1
{
    namespace s2
    {
        namespace s3
        {
            namespace s4
            {
                void func()
                {
                cout << "inside the fourth namespace" << endl;
                }
                int x = 12;
            }
        }
    }
}

namespace alias = s1::s2::s3::s4;
int  main()
{
    // cout << s1::s2::s3::s4::func() << endl;
    alias ::func();
    cout << alias::x << endl;
}