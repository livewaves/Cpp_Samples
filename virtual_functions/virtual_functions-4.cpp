// can static function be virtual?
// virtual functions are invoked when you have a pointer reference to instance of a class
// static function are not type to a particular instant. they are type to a class
// a function cannot be both virtual and static
#include <iostream>
using namespace std;

class A
{
    public:
        virtual static void s()
        {
            cout << "anything" << endl;
        }
};

class B: public A
{
    public:
        static void s()
        {
            cout << ",,," << endl;
        } 
};

int main()
{
    A *a;
    B b;
    a = &b;
    a -> s();
    return 0;
}