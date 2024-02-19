// Constructor
#include <iostream>
using namespace std;

// application in setting intial values of the class members
// it is possible to define constructore both inside and outside class
// NOTICE: CONSTRUCTOR must have the same name as class
// IT is not possible to OVERLOAD constructor, meanning to define it once 
// either inside or outside the class
class udemy
{
    public:
        int length;
        int height;
        int x;
        int y;

        udemy()
        {
            length = 10;
            height = 20;
        }
        // udemy();             Defining constructor outside the class
};
                                // Defining constructor outside the class
// udemy::udemy()
// {
//     x = 30;
//     y = 40;
// }

int main()
{
    udemy op;
    cout << "length is : " << op.length <<" and height is : "<< op.height << endl;
    cout << "x is : " << op.x << " and y is : " << op.y << endl;
}