// pointer to functions
#include <iostream>
using namespace std;

// passing by reference without pointers
// compiler cleverly understands a and b inputs of swap functions
// are passed by reference. so, swapping takes place in the original 
// address of the variables 

// the input argument is integer and in the body of the function, 
// it is written the expected parameters are references of 
// integer values, compiler understands swap(a, b) means passing
// integer references to a and b.

// In C++, the expression int &y = x; does not store the physical
// address of variable x in y. Instead, it creates a reference 
// variable y that refers to the same memory location as variable x

// when you define a function to accept arguments by reference, you 
// pass the variables themselves, not their addresses. The syntax
// swap(a, b) is legal because it matches the function signature 
// and passes references to the variables a and b. There's no need
// for the explicit use of the address-of operator in this case.

// When you pass a and b as arguments to the swap function, 
// and they are accepted as references n1 and n2 respectively,
// n1 and n2 become aliases for a and b respectively.
// &n1 = a;
// &n2 = b;


void swap(int &, int&);

int main()
{
    int a = 1, b=2;
    swap(a, b);
    cout << "a is : " << a << endl;
    cout << "b is : " << b << endl;

}

void swap(int &n1, int &n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
}



// alias concept; IMPORTANT
// y is a reference to x. When you assign y = 10;, it actually 
// modifies the value of x because y is just another name for x.
// There's no need to use &y to modify x; you directly use y.

// ####
// #include <iostream>
// using namespace std;

// int main() {
//     int x = 5;
//     int &y = x; // y is a reference to x

//     cout << "x: " << x << endl; // Prints: x: 5
//     cout << "y: " << y << endl; // Prints: y: 5

//     y = 10; // Modifying y also modifies x

//     cout << "x: " << x << endl; // Prints: x: 10
//     cout << "y: " << y << endl; // Prints: y: 10

//     return 0;
// }
// ####