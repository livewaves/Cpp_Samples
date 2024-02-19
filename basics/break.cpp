#include <iostream>
using namespace std;
// break is only used in switchcase and loops. NOT if CONDITIONS
// break goes directly out of loop.
int main()
{
    int i=0;
    while (i<3)
    {
    int number;
    cout << "Enter a number : "<< endl;
    cin >> number;
    if (number > 5)
    {
        cout << "Success" << endl;
    }
    else
    {
        break;
    }
    i++;
    }
    
}