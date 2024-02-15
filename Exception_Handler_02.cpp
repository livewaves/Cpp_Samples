#include <iostream>
using namespace std;

//exception 2 is handled by the 2nd catch since it is not of char type
int main()
{
    try
    {
        throw 2;
    }
    catch(char *exc)
    {
        cout << "caught the character exception"<<endl;
    }
    catch(...)
    {
        cout<<"catch all called" <<endl;
    }
    return 0;
}
