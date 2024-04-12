#include <iostream>
using namespace std;

class A
{
    public:
        ~A()
        {
            cout << "Base class destructor" << endl;
        }
};

class B: public A
{
    public:
        ~B()
        {
            cout <<"derived class destructor"<<endl;
        }
};

int main()
{
    A *a = new B;
    delete a;
}