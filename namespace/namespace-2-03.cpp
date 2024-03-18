// methods inside the namespace and outside the class
#include <iostream>
using namespace std;

namespace w
{
    void display();
    class x
    {
        public:
            void display();
    };
}

void w::display()
{
    cout << "function inside the namespace" << endl; 
}

void w::x::display()
{
    cout << "function inside the class of the namespace" << endl;
}

int main()
{
    w::x obj1;
    obj1.display();
    w::display();
}