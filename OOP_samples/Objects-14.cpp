// Polymorphism
#include <iostream>
using namespace std;
// inheritance, encapsulation and polymorphism are pillars of OOP

// prototype of display function is identical in A and B classes
// Compile time polymorphism refers to the ability of the compiler to select the appropriate 
// function or method to call at compile time based on the types 
// involved in the function call.
// run time polimorphism selects the function in runtime and it is more flexible 
// than complie time polymorphism
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

}
