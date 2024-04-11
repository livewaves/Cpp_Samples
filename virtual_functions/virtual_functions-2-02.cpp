// default arguments
// default arguments do not participate in the signiture of a function
// signitures in base and derived class the same
// if argument is missing when calling function, it is used at compile time
#include <iostream>
using namespace std;

class A
{
    public:
        virtual void s(int a = 0)
        {
            cout << "this is the base class "<<a<<endl;
        }
};

class B: public A
{
    public:
        virtual void s(int a)
        {
            cout << "this is the derived class and the a value is "<< a << endl;
        }
};

int main()
{
    B b;
    A *a = &b;
    a -> s();
    // when it does not have value, compiler checks and uses default value
 
    return 0;
}