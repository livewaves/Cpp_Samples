// runtime Polymorphism
#include <iostream>
using namespace std;
// inheritance, encapsulation and polymorphism are pillars of OOP

// prototype os display function is identical in A and B classes
// Compile time polymorphism refers to the ability of the compiler to select the appropriate 
// function or method to call at compile time based on the types 
// involved in the function call.
// run time polymorphism selects the function in runtime and it is more flexible 
// than complie time polymorphism

class A{
    int a;
    public:
        virtual void display()
        {
            cout << "class A" << endl;
        }
};


class B
{
    int b;
    public:
        void display()
        {
            cout << "class B" << endl;
        }
};

class C: public A
{
    public:
        void display()
        {
            cout << "class C" << endl;
        }
};


int main()
{
    A *s;
    A a;
    B b;
    C c;
    s = &c;
    s ->display();
    return 0;
    // The pointer can be equal to a, b and c.
    // Depending on the pointer, different display function
    // are called
}
