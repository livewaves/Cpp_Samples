// Hybrid Inheritance
// Multilevel Inheritance
#include <iostream>
using namespace std;

// Derived class is formed from multiple base classes
// Rectangle class faces ambiguity due to have two identical instances of Shape class
// inherited from its inheritance! Shape within Triangle and Square
class Shape
{
          
};

class Triangle: public Shape
{
    protected:
        int height;
    public:    
        void setheight(int h)
        {
            height = h;
        }    
};


class Square: public Shape
{
    protected:
        int width;

    public:
    void setwidth(int w)
    {
        width = w;
    }       
};

// child has access to public members of the parent
class Rectangle: public Triangle, public Square
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