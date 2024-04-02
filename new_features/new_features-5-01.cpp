// default specifiers
#include <iostream>
using namespace std;

class A
{
    public:
        A(int a)
        {
        };
        A() = default;     
};

int main()
{
    A a;
}