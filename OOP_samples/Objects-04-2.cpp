// Parameterized Constructor
#include <iostream>
using namespace std;

class udemy
{
    public:
        int length;
        int height;
        udemy(int x, int y)
        {
            length = x;
            height = y;
            cout << "constuctor with 2 arguments called" << endl;
        }
        
        udemy(int x)
        {
            length = x;
            cout << "constructor with 1 argument called" << endl;
        }

        udemy()
        {
            cout << "constructor with no arguments called" << endl;
        }        
};


int main()
{
    udemy op;
    //cout << "length is : "<< op.length <<" and height is "<< op.height<< endl;

}

