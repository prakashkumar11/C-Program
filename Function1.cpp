#include<iostream>
using namespace std;

// void greet() { // declaring a function
//     cout << " Jai shree ram"<<endl;
// }

// void printNum(int num) { //function parameter
//     cout << num;
// }

void displayNum(int n1, float n2) {
    cout << "The int number is " << n1 <<endl;
    cout << "The float number is " << n2 <<endl;
}
int main()
{
    // greet();    //calling a function

    // int n = 10;
    // printNum(n); //calling the function n is passed to the function as a argument

    int num1 = 5;
    double num2 = 6.3;

    // calling the function
    displayNum(num1, num2);



    return 0;
}