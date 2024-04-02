// lambda function with inputs and output
#include <iostream>
using namespace std;

int main()
{
    auto lambda = [] (int x, int y) -> int
    {
       
        return x+ y;
    };
    int result = lambda(3, 4);
    cout << result << endl;
}