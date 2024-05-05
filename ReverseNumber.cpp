
#include<iostream>
using namespace std;


int main()
{
    int num, rev=0, remainder;
    // 12345 ==> 54321
    cout <<"Enter number ";
    cin >>num;

    
    while(num>0)
    {
        remainder=num%10;
        rev=rev*10+remainder;
        num=num/10;
    }

    cout <<rev;
    
    

}