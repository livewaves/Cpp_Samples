// Data Abstraction
// abstraction in the class level
#include <iostream>
using namespace std;

// abstraction in the class level

class Sum
{
    private:
    int x, y, z;
    
    public:
        void add()
        {
            cout << "Enter two number "<< endl;
            cin >> x;
            cin >> y;
            z = x + y;
            cout << " sum of the two numbers is " << z << endl;    
        }

};

int main()
{
    Sum ad;
    ad.add();
    return 0;
}

