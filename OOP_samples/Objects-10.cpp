// Multiple Inheritance
#include <iostream>
using namespace std;

// Derived class is formed from multiple base classes
class Shape1
{
    protected:
        int width;

    public:
    void setwidth(int w)
    {
        width = w;
    }                 
};

class Shape2
{
    protected:
        int height;
    public:    
        void setheight(int h)
        {
            height = h;
        }    
};

// child has access to public members of the parent
class Rectangle: public Shape1, public Shape2
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