#include<iostream>
using namespace std;

void patternStar()
{
    for(int row=1; row<=5; row=row+1) {
        for(int col=1; col<=row; col=col+1) {
            cout <<"*" <<" ";
        }
        cout <<endl;
    }
}

void patternStar1() 
{
    for(int row=1; row<=5; row=row+1) {
        for(int col=1; col<=5-(row-1); col=col+1) {
            cout <<"*" <<" ";
        }
        cout <<endl;
    }
}

void patternNumber()
{
    for(int row=1; row<=5; row=row+1) {
        for(int col=1; col<=row; col=col+1) {
            cout <<col <<" ";
        }
        cout <<endl;
    }
}

void patternNumber1() 
{
    for(int row=1; row<=5; row=row+1) {
        for(int col=1; col<=row; col=col+1) {
            cout <<row <<" ";
        }
        cout <<endl;
    }
}

void patternNumber2()
{
    for(int row=1; row<=5; row=row+1) {
        for(int col=row; col>=1; col=col-1) {
            cout <<col <<" ";
        }
        cout <<endl;
    }
}

void patternNumber3()
{
    for(int row=1; row<=5; row=row+1) {
        for(int col=1; col<=5-(row-1); col=col+1) {
            cout <<col <<" ";
        }
        cout <<endl;
    }
}

void patternAlphabet1()
{
    for(int row=1; row<=5; row=row+1) {

        char name='A'+(row-1);
        for(int col=1; col<=row; col=col+1) {
            cout <<name <<" ";
        }
        cout <<endl;
    }
}

void patternNumber4()
{
    int row, col;
    for(row=1; row<=5; row=row+1) {
        for(col=5; col>=5-(row-1); col=col-1) {
            cout <<col <<" ";
        }
        cout <<endl;
    }
}


int main()
{
    patternNumber4();



    return 0;
}