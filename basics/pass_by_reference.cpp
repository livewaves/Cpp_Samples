#include <iostream>
using namespace std;

// This example shows lifetime scope of variables and difference between 
// passing by value vs passing by reference
// pass by value, we have not changed the values in the address location
// if we want to change the values in address location, we need to pass them by reference
// in case of passing values, the origianl values remain as the same before.
// local variables are copies of the original arguments. any modifications to copies
// restricted in the local function, whereas in pass by reference, local variables
// are references to storage locations of original arguments and any changes affect the 
// original variables.

int x = 10;
int y = 20;

// void changeValues(int, int);

// int main()
// {
//     cout << "Before calling the function, values are: "<< endl;
//     cout << x << endl;
//     cout << y << endl;
//     changeValues(x, y);
//     cout << endl << endl;
//     cout << "After changing the values in the function, the original values are: " << endl;
//     cout << x << endl;
//     cout << y << endl;

// }

// void changeValues(int x, int y)
// {
//     x = x + 10;
//     y = y + 20;
//     cout << "Values in the function are: " << endl;
//     cout << endl << endl;
//     cout << x << endl;
//     cout << y << endl;
// }






// & is reference variable. so, changeValues function receives the address locations
// of the inputs. so, changes will be made in the reference of storage locations 
// of the inputs.
void changeValues(int&, int&);

int main()
{
    cout << "Before calling the function, values are: "<< endl;
    cout << x << endl;
    cout << y << endl;
    changeValues(x, y);
    cout << endl << endl;
    cout << "After changing the values in the function, the original values are: " << endl;
    cout << x << endl;
    cout << y << endl;

}

void changeValues(int &x, int &y)
{
    x = x + 10;
    y = y + 20;
    cout << "Values in the function are: " << endl;
    cout << endl << endl;
    cout << x << endl;
    cout << y << endl;
}