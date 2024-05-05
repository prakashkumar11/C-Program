#include<iostream>
using namespace std;

int main()
{
    int num;
    cout <<"Enter number to check even or odd : ";
    cin >>num;

    if(num%2==0) {
        cout <<num <<" is even number";
    } else {
        cout <<num <<" is odd number";
    }

    return 0;
}