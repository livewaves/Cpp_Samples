#include <iostream>
using namespace std;

// the function factorial calculates the factorial of 
// a non-negative integer n.The factorial function calls
// itself recursively until it reaches the base case 
// (when n is 0 or 1).

// Recursive function to calculate factorial
int factorial(int n) {
    // Base case: if n is 0 or 1, return 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Recursive case: n * factorial(n-1)
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Example usage:
    int result = factorial(5);
    cout << result << endl;  // Output will be 120 (5 * 4 * 3 * 2 * 1)
    return 0;
}
