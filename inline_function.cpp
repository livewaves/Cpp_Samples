#include <iostream>
using namespace std;

//instead of doing normal procedure (fetch, decode, execute, mem, write-back),
// simply, dear compiler, please embed the inline function withing caller function
// in this case, storage and retrieval processes are eliminated. so, inline function
// remove memory space. the code is of the called function is copied inside the caller
// function.
// The goal is to minimize area and complexity

inline void func(int num)
{
    cout << "The number is : " << num << endl;
}

int main()
{
    int num;
    cout << "Enter the number: " << endl;
    cin >> num;
    func(num);
}