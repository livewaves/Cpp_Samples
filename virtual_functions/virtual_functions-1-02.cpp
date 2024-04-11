// late binding
// used to tell compiler to dynamiclly linkage of the function using virtual keyword
// during late binding, the function call is resolved during run time. 
// virtual function must be a member of some class and it should not have static members
#include <iostream>
using namespace std;

class A
{
    public:
        virtual void display()
        {
            cout << "This is the base class" << endl;
        }
};

class B: public A
{
    public:
     void display()
     {
        cout << "This is the derived class" << endl;
     }
};

// make an object pointer of class A, make a simple object from class B
// make a reference from A
// the pointer a can access only base class members but not members of the derived class
int main()
{
    A *a;
    B b;
    a = &b;
    a -> display();     // late binding
    return 0;
}
