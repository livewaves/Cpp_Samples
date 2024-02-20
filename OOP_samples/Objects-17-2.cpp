// operator overloading
// Operator overloading is a powerful feature in C++ that enables you to redefine the behavior of operators 
#include <iostream>
using namespace std;

class Test
{
    private:
        int num;

    public:
        Test():num(8)
        {

        }   
        void operator++(){
            num = num + 2;
        } 

        void print()
        {
            cout << " The count is : " << num << endl;
        }
};

int main()
{
    Test tt;
    ++tt;
    tt.print();
    return 0;
}