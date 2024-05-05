#include<iostream>
using namespace std;

// bool checkPrime(int);

// int main()
// {
//     int n;
//     cout <<"Enter a positive integer : ";
//     cin >>n;

//     if(checkPrime(n)) {
//         cout << n << " is a prime number ";
//     } else {
//         cout << n << " is not a prime number";
//     }

//     return 0;
// }

// bool checkPrime(int n) {
//     bool isPrime = true;

//     if(n==0 || n==1) {
//         isPrime = false;
//     }
//     for(int i=2; i<=n/2; i++) {
//         if(n%i==0) {
//             isPrime = false;
//             break;
//         }
//     }
//     return isPrime;
// }

// bool check_prime(int);

// int main() {

//     int n;
//     cout <<"Enter a positive integer :";
//     cin >>n;

//     if(check_prime(n)) {
//         cout << n << " is a prime number";
//     } else {
//         cout << n << " is not a prime number";
//     }

//     return 0;
// }

// bool check_prime(int n) {
//     bool isPrime = true;
    
//     //0 and 1 are not prime numbers
//     if(n==0 || n==1) {
//         isPrime = false;
//     }
//     for(int i=2; i<=n/2; i++) {
//         if(n%i==0) {
//             isPrime = false;
//             break;
//         }
//     }

//     return check_prime;
// }

bool checkPrime(int);

int main()
{
    int num;
    cout <<"Enter number to check Prime : ";
    cin >>num;

    if(checkPrime(num)) {
        cout <<num <<" is prime number";
    } else {
        cout <<num <<" is not prime number";
    }


    return 0;
}

bool checkPrime(int n) {
    bool isPrime = true;
    if(n==0 || n==1) {
        isPrime = false;
    }
    for(int i=2; i<=n/2; i++) {
        if(n%i==0) {
            isPrime = false;
            break;
        }
    }

    return checkPrime;

}