#include<iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sum;
    cout << "Enter two integer : ";
    cin >> firstNumber >> secondNumber;

    sum = firstNumber + secondNumber;

    cout << firstNumber << " + " << secondNumber << " = " << sum;

    return 0;
}