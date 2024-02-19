#include <iostream>
using namespace std;

// continue restarts the loop. NOTICE that it does not execute the next lines
// There is a jump execution after continue
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
        continue;
    }
    i++;
    }
    
}