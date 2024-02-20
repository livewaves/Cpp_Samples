// Function Overloading
#include <iostream>
using namespace std;

class calculator
{
    public:
        static int add (int a, int b)
        {
            return (a + b);
        }
        static double add (int a, double b)
        {
            return (a + b);
        }

        static int add(int a, int b, int c)
        {
            return (a+b+c);
        }
};

int main()
{
    calculator c;
    cout <<c.add(3, 3);
    cout << endl;
    cout << c.add(2, 3, 4);
    cout << endl;
    cout << c.add(2, 2.3);
    return 0;
}