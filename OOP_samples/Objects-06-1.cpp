// static members of a class
#include <iostream>
using namespace std;

// no matter how many instances we have from a class
// there is only one copy of the static member
// shared among all instances. 
// count is a single variable shared among all created instances of udemy class

class A
{
    public:
        static int count;
        
        A(double l = 2.0, double b = 2.0, double h = 2.0)
        {
            length = l;
            breadth = b;
            height = h;

            count++;
        }  

        double volume()
        {
            return length * breadth * height;
        }

        private:
            double length, breadth, height;
};

// we declare the static variable is initialized to 0
int A::count = 0;

int main()
{
    A a1(2.1, 2.2, 2.3);
    A a2(4.3, 4.3, 4.5);
    cout << "Count value is : " << A::count << endl;
}