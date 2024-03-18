// class definition outside the namespace
#include <iostream>
using namespace std;

namespace w
{
    class x;
}

class w::x
{
    public:
        void display()
        {
            cout << "outside the namespace" << endl;
        }
};

class x 
{

};

int main()
{
    x obj1;
    w::x obj2;
    obj2.display();
}