#include <iostream>
using namespace std;

void patternStar()
{
    for (int row = 1; row <= 5; row = row + 1)
    {
        for (int col = 1; col <= 5; col = col + 1)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void patternNumber()
{
    for (int row = 1; row <= 4; row = row + 1)
    {
        for (int col = 1; col <= 4; col = col + 1)
        {
            cout << "10 ";
        }
        cout << endl;
    }
}

void patternNumber1()
{
    for (int row = 1; row <= 5; row = row + 1)
    {
        for (int col = 1; col <= 5; col = col + 1)
        {
            cout << row << " ";
        }
        cout << endl;
    }
}

void patternNumber2()
{
    for (int row = 1; row <= 5; row = row + 1)
    {
        for (int col = 1; col <= 5; col = col + 1)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

void patternNumber3()
{
    for (int row = 1; row <= 5; row = row + 1)
    {
        for (int col = 5; col >= 1; col = col - 1)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

void patternSquareNumber()
{
    for (int row = 1; row <= 5; row = row + 1)
    {
        for (int col = 1; col <= 5; col = col + 1)
        {
            cout << col * col << " ";
        }
        cout << endl;
    }
}

void patternCubeNumber()
{
    for (int row = 1; row <= 5; row = row + 1)
    {
        for (int col = 1; col <= 5; col = col + 1)
        {
            cout << col * col * col << " ";
        }
        cout << endl;
    }
}

void patternAlphabet()
{
    for (int row = 1; row <= 5; row = row + 1)
    {

        char name = 'A' + row - 1;
        for (int col = 1; col <= 5; col = col + 1)
        {
            cout << name << " ";
        }
        cout << endl;
    }
}

void patternAlphabet1()
{
    for (int row = 1; row <= 5; row = row + 1)
    {
        for (char col = 'a'; col <= 'e'; col = col + 1)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

void patternNumber4()
{

    int count = 1;
    for (int row = 1; row <= 5; row = row + 1)
    {
        for (int col = 1; col <= 5; col = col + 1)
        {
            cout << count << " ";
            count = count + 1;
        }
        cout << endl;
    }
}

int main()
{
    patternNumber4();

    return 0;
}