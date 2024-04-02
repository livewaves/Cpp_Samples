// different approaches to define a lambda function
#include <iostream>
using namespace std;

// int main()
// {
//     auto lambda = []()
//     {
//         cout << "I am a lambda function" << endl;
//     };
//     lambda();
// }

// int main()
// {
//     auto lambda = [](void)
//     {
//         cout << "I am a lambda function" << endl;
//     };
//     lambda();
// }

int main()
{
    auto lambda = [](void) -> void              // 1st void is no argument, 2nd void is return nothing
    {
        cout << "I am a lambda function" << endl;
    };
    lambda();
}
