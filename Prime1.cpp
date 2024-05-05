#include<iostream>
using namespace std;

int main()
{
    // int n;
    // bool isPrime = true;
    // cout <<"Enter number to check prime or not : ";
    // cin >>n;

    // if(n==0 || n==1) {
    //     isPrime = false;
    // }
    // for(int i=2; i<=n/2; i++) {
    //     if(n%i==0) {
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if(isPrime) {
    //     cout << n << " is a prime number";
    // } else {
    //     cout << n << " is not a prime number";
    // }

    int num, i;
    bool is_prime = true;

    cout <<"Enter number to check prime : ";
    cin >>num;

    if(num==0 || num==1) {
        is_prime = false;
    }

    for(i=2; i<=num/2; i++) {
        if(num%i==0) {
            is_prime = false;
            break;
        }
    }

    if(is_prime) {
        cout <<num <<" is prime number";
    } else {
        cout <<num <<" is not prime number";
    }

    return 0;
}