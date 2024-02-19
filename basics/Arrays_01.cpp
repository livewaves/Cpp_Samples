#include <iostream>
using namespace std;

// Passing an array to a function

double getAvg(int Arr[], int size);

double getAvg(int Arr[], int size)
{
    int i, sum = 0;
    for(i=0; i<size; i++)
    {
        sum +=Arr[i];
    }
    double avg = double(sum)/size;
    return avg;
}

int main()
{
    int balance[5] = {12, 17, 19, 13, 20};
    double avg;
    avg = getAvg(balance, 5);
    cout << "the average is : " << avg << endl;
}