// Class Memeber Functions

#include <iostream>
using namespace std;

class udemy
{
    //member function declaration
    public:
        void printing();
        void print(int i);

    void printtt()
    {
        cout << "Function inside the class called" << endl;
    };
};

// return type of the function; class name; "::" is member function; function name
//it is possible also to define member function within the class

void udemy::printing()
{
    cout << "Fucntion with no argument called in" << endl;
};

void udemy::print(int i)
{
    cout << "Function with argument : "<< i << " called" << endl;
};

int main()
{
    udemy op;
    op.printing();
    op.print(4); 
    op.printtt();
};