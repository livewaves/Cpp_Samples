// Destructor
#include <iostream>
using namespace std;

// a special member function of a class whenever the object goes out of the scope
// useful for releasing memory and resources before coming out of the program 

class udemy
{
    public:
        udemy();
        ~udemy();
};

udemy::udemy()
{
    cout << "constructor with no arguments called" << endl;
}

udemy::~udemy()
{
    cout << "Object has been deleted" << endl;
}

int main(){
    udemy op;
};