// lambda function with inputs
#include <iostream>
using namespace std;

int main()
{
    auto lambda = [] (int x, int y)
    {
        cout << "sum of no is :" << x + y << endl;
    };
    lambda(3, 4);
}