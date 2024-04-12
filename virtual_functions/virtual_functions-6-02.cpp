#include <iostream>
using namespace std;
//virtual destructor
// what we want is to delete all objects, virtual feature allows us
class A
{
    public:
        virtual ~A()
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