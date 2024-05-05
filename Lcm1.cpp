#include<iostream>
using namespace std;

void lcm()
{
    int a, b;
    cin >>a >>b;

    int l= a>b ? a : b;
    for(l=1; l<=a*b; l++)
    {
        if(l%a==0 && l%b==0)
        {
            break;
        }
    }
    cout <<l<<" ";
}

int main()
{
    lcm();

    return 0;

}