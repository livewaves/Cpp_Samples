// Encapsulation
#include <iostream>
using namespace std;

// class A
// {
//     public:
//         double getVolume(void)
//         {
//             return length * breadth * height;
//         }
//     private:
//         double length, breadth, height;    
// };



// encapsulation means hiding something from the outside and 
// do not let everybody see that. have a look at total private member
class Add
{
    public:
        Add(int i=0)
        {
            total = i;
        }
        void addNum(int number)
        {
            total += number; 
        }

        int getTotal()
        {
            return total;
        }

    private:
        int total;    
};


int main()
{
    Add a;
    a.addNum(10);
    a.addNum(20);
    cout << "Total is " << a.getTotal() << endl;
    return 0;
}