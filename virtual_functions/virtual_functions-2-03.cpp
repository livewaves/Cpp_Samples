// default arguments
// default arguments do not participate in the signiture of a function
// default argument decision is made at compile time based on the object pointer (A *a)
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
        virtual void s(int a = 2)
        {
            cout << "this is the derived class and the a value is "<< a << endl;
        }
};

int main()
{
    B b;
    A *a = &b;
    a -> s();
    // default value is substituted at compile time. S function is called with pointer from base class. IMPORTANT
    // best practice to avoid default arguments in virtual functions
    return 0;
}