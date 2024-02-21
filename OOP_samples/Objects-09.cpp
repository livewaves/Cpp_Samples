// Inheritance
#include <iostream>
using namespace std;

// protected members are usable in inheritance
// used by subclass that is inherited from the parent

// The specifier type determines the kind of area access in child
// if we use public specifier, the parent becomes public member of 
// the child.

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
