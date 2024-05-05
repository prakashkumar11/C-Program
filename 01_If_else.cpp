#include<iostream>
using namespace std;

void demo()
{
    int package;
    cin >>package;

    if(package>10)
        cout <<"Accepted";
    else
        cout <<"Rejected";
}

void demo1()
{
    int package;
    cin >>package;

    if(package<=10)
        cout <<"Rejected";
    else 
        cout <<"Accepted";
}

void demo2()
{
    int marks;
    cin >>marks;

    if(marks > 33)
        cout <<"Pass";
    else 
        cout <<"Fail";
}

void demo3()
{
    int a, b;
    cout <<"Enter your first number ";
    cin >>a;
    cout <<"Enter your second number ";
    cin >>b;

    if(a>b)
        cout <<"Yes";
    else 
        cout <<"No";
}

void demo4()
{
    int num;
    cin >>num;

    if(num%2==0)
    {
        cout <<"Even";
    }
    else 
    {
        cout <<"Odd";
    }
}
void demo5()
{
    int num;
    cin >>num;

    if(num%2==1)
        cout <<"Odd";
    else 
        cout <<"Even";
}
void pos_Neg()
{
    int num;
    cin >>num;

    if(num>0)
        cout <<"Pos";
    else if(num==0)
        cout <<"Zero";
    else 
        cout <<"Neg"; 
        
}

void vowel_Consonant()
{
    char ch='a';
    if(ch=='a')
        cout <<"vowel";
    else if(ch=='e')
        cout <<"vowel";
    else if(ch=='i')
        cout <<"vowel";
    else if(ch=='o')
        cout <<"vowel";
    else if(ch=='u')
        cout <<"vowel";
    else 
        cout <<"consonant";
}

int main()
{
    demo1();

    return 0;
}