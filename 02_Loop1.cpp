#include<iostream>
using namespace std;

void printHello()
{
    int count=1;
    for(count=1; count<=5; count=count+1)
        cout <<"Hello World "<<endl;
}

void countNumber()
{
    for(int i=10; i<=20; i=i+1)
        cout <<i <<" ";
}
void squareNum()
{
    int num;
    cin >>num;
    for(int i=1; i<=num; i=i+1)
        cout <<i*i <<" ";
}
void cubeNumbers()
{
    int num;
    for(int i=1; i<=num; i=i+1) {
        cout <<i*i*i <<" ";
    }
}

void firstNNaturalNum()
{
    int num;
    cin >>num;
    int count;
    for(count=1; count<=num; count=count+1)
        cout <<count <<" ";
}

void allEvenNumber()
{
    int num;
    cin >>num;
    
    for(int i=2; i<=num; i=i+2)
        cout <<i <<" ";
}

void allOddNumber()
{
    int num;
    cin >>num;

    for(int i=1; i<=num; i=i+2)
        cout <<i <<" ";
}

void allEvenNumber1()
{
    int num;
    cin >>num;

    for(int i=1; i<=num; i=i+1)
        if(i%2==0)
            cout <<i <<" ";
}

void allOddNumber1()
{
    int num;
    cin >>num;

    for(int i=1; i<=num; i=i+1)
    {
        if(i%2==1)
            cout <<i <<" ";
    }
}

void printRepeatNum()
{
    int num, count=1;
    cin >>num;
    while(count<=num)
    {
        printf("%d ", num);
        count=count+1;
    }

}

void printNaturalNumber()
{
    int num, count=1;
    cin >>num;

    while(count <=num)
    {
        printf("%d ", count);
        count=count+1;
    }
}

void sumOfNaturalNumber()
{
    int num, i=1, sum=0;
    cin >>num; 

    while(i<=num) 
    {
        sum=sum+i; 
        i=i+1;      
    }
    cout <<sum;
}

int main()
{
    sumOfNaturalNumber();

    return 0;
}