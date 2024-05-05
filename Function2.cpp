#include<iostream>
using namespace std;

int add(int a, int b) {
    return (a + b);
}

int main()
{
    int sum;
    sum = add(100, 5);
    cout << " Sum of Number : " << sum << endl;

    return 0;
}