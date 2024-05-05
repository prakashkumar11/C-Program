#include<iostream>
using namespace std;

// <============== No Arguments Passed and No Return value ===============>

// void prime();

// int main()
// {
//     // No argument is passed to prime()
//     prime();

//     return 0;
// }

// // Return type of function is void because value is not returned.
// void prime()
// {
//     int num, i, flag = 0;
//     cout << "Enter a positive integer enter to check : ";
//     cin >> num;

//     for (i=2; i<=num/2; ++i)
//     {
//         if (num % i == 0) {
//             flag = 1;
//             break;
//         }
//     }

//     if (flag == 1) {
//         cout << num << " is not a prime number";
//     } else {
//         cout << num << " is a prime number";
//     }
// }

// <============== No Arguments Passed but a Return value =================>

// int prime();

// int main() {

//     int num, i, flag = 0;
//     num = prime();
//     for(i=2; i<=num/2; ++i) {
//         if(num % i == 0) {
//             flag = 1;
//             break;
//         }
//     }

//     if(flag == 1){
//         cout <<num << " is not a prime number";
//     } else {
//         cout <<num << " is a prime number";
//     }

//     return 0;
// }

// // Return type of function is int
// int prime() {
//     int n;
//     printf("Enter positive integer to check : ");
//     cin >> n;

//     return n;

// }

// <============= Argument Passed but No return value ==============>

// void prime(int n);

// int main() {
//     int num;
//     cout <<"Enter a positive integer to check : ";
//     cin >> num;

//     prime(num);

//     return 0;
// }

// void prime(int n) {
//     int num, i, flag = 0;
//     for(i=2; i<=n/2; ++i) {
//         if (n % i == 0) {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 1) {
//         cout << n << " is Not Prime number";
//     } else {
//         cout << n << " is Prime Number";
//     }
// }

// <============= Arguments Passed and a Return value. ==============>

// int prime(int n);

// int main() {

//     int num, flag = 0;
//     cout << "Enter positive integer to check : ";
//     cin >> num;

//     flag = prime(num);

//     if(flag == 1) {
//         cout << num << " is not prime number";
//     } else {
//         cout << num << " is prime number";
//     }


//     return 0;
// }

// int prime(int n) {
//     int i;
//     for(i=2; i<=n/2; ++i) {
//         if (n % i == 0) {
//             return 1;
//         }
//     }
//     return 0;
// }

// <============= Function Overloading ===============>



int main() {



    return 0;
}