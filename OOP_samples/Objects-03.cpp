// Class Access Modifiers

#include <iostream>
using namespace std;

// public, private, protected
// public members are accessible from anywhere

class udemy
{
    public:
        int x;
        int y;

    private:
        int a;
        int b;

    protected:
        int d;
        int e;        
};

int main()
{
    udemy op;
    op.x = 4;
    op.y = 5;
};