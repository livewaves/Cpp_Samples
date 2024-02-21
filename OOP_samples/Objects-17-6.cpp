// Overriding
#include <iostream>
using namespace std;

// compiler understands to rewrite the function with the same name
// Function overriding in C++ is resolved at runtime through a 
// mechanism called dynamic polymorphism

class A
{
    public:
        void display()
        {
            cout << "class A" << endl;
        }
};

class B: public A
{
    public:
        void display()
        {
            cout << "class B" << endl;
        }
};

int main()
{
    A a;
    a.display();
    B b;
    b.display();
}