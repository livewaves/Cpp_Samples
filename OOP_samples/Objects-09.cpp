// Inheritance
#include <iostream>
using namespace std;

// protected members are usable in inheritance
// used by subclass that is inherited from the parent

// I think as we used public specifier, we access only to public members of 
// the base class. I suppose if we use private specifier, we also can
// access to private members

// This is indeed a single inheritance
// relationship between base and derived class is 1-1
class Shape
{
    protected:
        int width;
        int height;

    public:
        void setwidth(int w)
        {
            width = w;
        }    

        void setheight(int h)
        {
            height = h;
        }            
};


// child has access to public members of the parent
class Rectangle: public Shape
{
    public:
        int getarea()
        {
            return (width * height);
        }
};

int main()
{
    Rectangle op;
    op.setwidth(5);
    op.setheight(6);
    cout << "Area is : " <<op.getarea() << endl;
    return 0;

}
