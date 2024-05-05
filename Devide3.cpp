#include<iostream>
using namespace std;

int main()
{
    int divisor, divident, quotient, remainder;

    cout << "Enter divident : ";
    cin >> divident;

    cout << "Enter divisor : ";
    cin >> divisor;

    cout << "Enter quotient : ";
    cin >> quotient;

    cout <<" Enter remainder : ";
    cin >> remainder;

    // logical intity for find resuts;
    quotient = divident / divisor;
    remainder =  divident % divisor;

    cout << " Quotient : " << quotient << endl;
    cout << " Remainder : " << remainder << endl;

    return 0;
}