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
            cout << "we are in the function of class B" << endl;
        }
};

class C: public B
{
    public:
        void s()
        {
            cout << "we are in the function of class C" << endl; 
        }
};

int main()
{
    C c;
    B *b = &c;
}