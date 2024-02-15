#include <iostream>
using namespace std;

// there is no break in default case

int main()
{
    char grade = 'D';
    switch(grade)
    {
        case 'A':
            cout << "Amazing Job" << endl;
            break;
        
        case 'B':
            cout << "Good Job" << endl;
            break;  

        case 'C':
            cout << "Fair Job" << endl;
            break;

       case  'D': 
            cout << "Try Harder" << endl;
            break;

        case 'E':
            cout << "Never Try Again" << endl;
            break;

        default:
            cout << "Invalid Grade Entered" << endl;                    
    }
        cout << "Your Grade is : " << grade << endl;
}