#include <iostream>
using namespace std;

// a class is a blueprint for a datatype
class udemy{
    public:
        double length;
        double height;
};

int main() 
{
    udemy op;
    udemy op1;
    op.height = 2.0;
    op.length = 3.0;

    op1.height = 4.0;
    op1.length = 5.0;

    double product_op = op.height * op.length;
    double product_op1 = op1.height * op1.length;

    cout << "The product of object op is : " << product_op << endl;
    cout << "The product of object op1 is : " << product_op1 << endl;
}