// Multilevel Inheritance
#include <iostream>
using namespace std;


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

class Shape2: public Shape1
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
class Rectangle: public Shape2
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
