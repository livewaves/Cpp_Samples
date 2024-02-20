// Polymorphism
#include <iostream>
using namespace std;
// inheritance, encapsulation and polymorphism are pillars of OOP

// prototype os display function is identical in A and B classes
//Compile time polimorphism refers to the ability of the compiler to select the appropriate 
// function or method to call at compile time based on the types 
// involved in the function call.
// run time polimorphism selects the function in runtime and it is more flexible 
// than complie time polimorphism
class A{
    int a;
    public:
        void display()
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


int main()
{
    B b ;
    b.display();
    // the output is class B. decided within run time 
    A a;
    a.display();
    // the output is class A.
    return 0;
}
