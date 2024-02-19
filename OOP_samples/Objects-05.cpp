// friend function
#include <iostream>
using namespace std;

//defined outside class scope but it has access to all private and protected classes
// it can be template, fun.ction, member function etc
class udemy
{
    int height=4;
    public:
        friend void printing(udemy op);
};

// the op object has access to all private member as the friend function is defined
// as it is a friend function, there is no need to declare it to udemy::
//only mention the name of the object(udemy op)
// friend function is useful when it is required to give a certain access to one user out of many
void printing(udemy op)
{
    cout << op.height <<endl;
}

int main()
{
    udemy op;
    printing(op);
}