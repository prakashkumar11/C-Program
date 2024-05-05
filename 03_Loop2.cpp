#include<iostream>
using namespace std;

void countNUm()
{
    int i;
    for(i=100; i<=200; i++)
        cout <<i <<" ";
}
void alphabetPrint()
{
    char name;
    for(name='a'; name<='z'; name=name+1)
        cout <<name <<" ";
}

void reverseOrder()
{
    int n;
    cin >>n;
    for(int i=n; i>=1; i=i-1)
    {
        cout <<i <<" ";
    }
}

void printThreeJump()
{
    int n;
    cin >>n;
    for(int i=1; i<=n; i=i+3)
        cout <<i <<" ";
}
void printNm()
{
    int n;
    cin >>n;
    for(int i=1; i<n; i=i+1)
        cout <<i <<" ";
}

void printTable()
{
    int n;
    cin >>n;

    for(int i=1; i<=10; i=i+1)
        cout <<n <<"*" <<i<<"=" <<n*i <<endl;
}

void printTable2()
{
    int n;
    cin >>n;
    for(int i=n; i<=10*n; i=i+n)
        cout <<i <<" ";
}

void powerNum()
{
    int n, pow, num;
    cout <<"Enter the number ";
    cin >>n;

    cout <<"Enter the power ";
    cin >>pow;

    num=n;

    for(int i=1; i<pow; i=i+1)
        {
            num=num*n;
        }
        cout <<num;
    
}

void sumOfNatural()
{
    int n, sum=0;
    cin >>n;
    
    for(int i=1; i<=n; i=i+1)
        sum=sum+i;
    cout <<sum;

    // cout <<n*(n+1)/2;

}

void factorial()
{
    int n;
    cin >>n;

    int fact=1;
    for(int i=1; i<=n; i++)
        fact=fact*i;
    cout <<fact;
}

int primeNumber()
{
    int n;
    cin >>n;

    if(n<2)
    {
        cout <<"Not Prime";
        return 0;
    }
    else {
        for(int i=2; i<n; i=i+1)
        {
            if(n%i==0)
            {
                cout <<"Not Prime";
                return 0;
            }
        }
        cout <<"Prime";
    }
}

void fibonacciSeries()
{
    int n;
    cin >>n;

    int last=-1, prev=1, curr;

    for(int i=1; i<=n; i++)
    {
        curr=prev+last;
        cout <<curr <<" ";

        last=prev;
        prev=curr;
    }
    


}

int main()
{
    fibonacciSeries();


    return 0;
}