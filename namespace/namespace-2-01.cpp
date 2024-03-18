// class inside the namespace
#include <iostream>
using namespace std;

namespace w
{
    class x
    {
        public:
            void display()
            {
                cout << "inside the namespace w" << endl;
            }
    };
}

// class x in global scope
class x
{

};

int main()
{
    x obj1;
    w::x obj2;
    obj2.display();
    return 0;
}