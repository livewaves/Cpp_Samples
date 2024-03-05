#include <iostream>
using namespace std;
// There is a correlation between throw type and the input parameter of the catch.
// if the specific defined exception occurs, catch handles it
float div(float var1, float var2)
{
    if (var2 == 0)
    {
        throw "division by 0";
    }
    return var1/var2;
}

int main(){
    float x = 4;
    float y = 0;
    float d = 0.0;
    try
    {
        d = div(x, y);
        cout << d << endl;
        cout << "Hi" << endl;
    }
    catch(const char* error)
    {
        cout << "Hello"<< endl;
        cout << error<<endl;
    }
    return 0;
};
