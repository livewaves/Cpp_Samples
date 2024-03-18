// inline namespace
#include <iostream>
using namespace std;

// s3 thinks it is a part of s2, same attitude for s2. 

namespace s1
{
    inline namespace s2
    {
        inline namespace s3
        {
            int x = 10;
        }
    }
}

int main()
{
    // cout << s1::s2::s3::x << endl;
    cout << s1::x << endl;
}