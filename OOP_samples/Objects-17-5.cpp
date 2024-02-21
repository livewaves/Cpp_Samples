// function with default arguments ambiguity

#include <iostream>
using namespace std;

// as you can see, when calling fun function, it is possible compiler does
// not understand our intention. Because, 1st fun requires one argument and
// as well as the 2nd one regarding the fact that the 2nd argument of the
// 2nd fun function has a default value. so, the compile returns ambiguity 
// error.
void fun(int i)
{
    cout << i << endl;
}

void fun(int w, int j = 3)
{
    cout << j << endl;
}

int main()
{
    fun(12);

    return 0;
}