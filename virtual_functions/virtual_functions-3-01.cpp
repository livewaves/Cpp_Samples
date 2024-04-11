// virtual functions in derived classes
#include <iostream>
using namespace std;

class A
{
    public:
    virtual void s()
    {
        cout << "we are in the function of the base class " << endl;
    }
};

class B: public A
{
    public:
        void s()
        {
            cout << "we are in the function s of the derived class" << endl;
        }
        virtual void sa()
        {
            cout << "we are in the function sa of the derived class" << endl;
        }
};


int main()
{
    A *a1, *a2;
    A a3;
    B b;
    a1 = &a3;
    a2 = &b;
    a1 -> s();
    a2 -> s();
    // a2 -> sa(); // Base class has no member named "sa" 
}