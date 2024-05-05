#include <iostream>
using namespace std;

int main() {

//   int low, high, i;
//   bool is_prime = true;

//   cout << "Enter two numbers (intervals): ";
//   cin >> low >> high;

//   cout << "\nPrime numbers between " << low << " and " << high << " are: " << endl;

//   while (low < high) {
//     is_prime = true;

//     // 0 and 1 are not prime numbers
//     if (low == 0 || low == 1) {
//       is_prime = false;
//     }
 
//     for (i = 2; i <= low/2; ++i) {
//       if (low % i == 0) {
//         is_prime = false;
//         break;
//       }
//     }
        
//     if (is_prime)
//       cout << low << ", ";

//     ++low;
//   }


    // int low, high, i;
    // bool isPrime = true;

    // cout <<"Enter two numbers : ";
    // cin >>low >> high;

    // cout <<"\nPrime Numbers between " << low << " and " << high << " are : " << endl;

    // while(low < high) {
    //     isPrime = true;

    //     // 0 and 1 are not prime numbers 
    //     if(low==0 || low==1) {
    //         isPrime = false;
    //     }
    //     for (i=2; i<=low/2; i++){
    //         if (low%i==0) {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if(isPrime) {
    //         cout << low <<" ";
    //     }
    //     low++;
    // }

    // int low, high, i;
    // bool isPrime = true;
    // cout <<"Enter two number : ";
    // cin >>low >>high;
    // cout <<"\nPrime Number between " << low << " and " << high << " are : " << endl;
    // while (low < high) {
    //     isPrime = true;

    //     // 0 and 1 are not prime numbers
    //     if (low==0 || low==1) {
    //         isPrime = false;
    //     }
    //     for (i=2; i<=low/2; i++) {
    //         if (low%i==0) {
    //             isPrime = false;
    //             break;
    //         }
    //     }
    //     if (isPrime) {
    //         cout << low << " ";
    //     }
    //     low++;
    // }

    // int l, h, i;
    // bool isP = true;
    // cout <<"Enter two number : ";
    // cin >>l >>h;
    // cout <<"\nPrime number between " << l << " and " << h << " are " << endl;
    // while (l < h) {
    //     isP=true;
    //     if (l==0 || l==1) {
    //         isP = false;
    //     }
    //     for (i=2; i<=l/2; i++) {
    //         if(l%i==0) {
    //             isP = false;
    //             break;
    //         }
    //     }
    //     if(isP) {
    //         cout << l << " ";
    //     }
    //     l = l + 1;
    // }

    // int low, high, i;
    // bool isPrime = true;

    // cout <<"Enter two numbers : ";
    // cin >>low >>high;

    // cout <<"Prime number between " << low << " and " <<high <<" are "<<endl;

    // while(low < high) {
    //     isPrime = true;

    //     if(low == 0 || low == 1){
    //         isPrime = false;
    //     }

    //     for (i=2; i<=low/2; i++) {
    //         if(low%i==0) {
    //             isPrime = false;
    //             break;
    //         }
    //     }

    //     if(isPrime) {
    //         cout << low <<" ";
    //     }
    //     low++;
    // }


    int low, high, i;
    bool is_prime = true;

    cout <<"Enter two number : ";
    cin >>low >>high;

    cout <<"Prime number between " <<low <<" and " <<high <<" are "<<endl;

    while(low < high) {
        is_prime = true;

        if(low == 0 || low == 1) {
            is_prime = false;
        }

        for(i=2; i<=low/2; i++) {
            if(low%i==0) {
                is_prime = false;
                break;
            }
        }
        if(is_prime) {
            cout << low << " ";
        }
        low++;
    }

  return 0;
}