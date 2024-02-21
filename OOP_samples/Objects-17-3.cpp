
#include <iostream>
using namespace std;

class A
{
    int x;
    public:
        A()
        {

        }
        A(int i)
        {
            x = i;
        }

        void operator+(A);
        void display();
        
};
// performing add using '+' operator between x of the current instance
// and that of being passed as an argument 
void A::operator+(A a)
{
    int m = x + a.x;
    cout << m << endl;
} 

int main()
{
    A a1(5);
    A a2(4);
    a1 + a2;
    return 0;
}
