
//<========== Function Overloading =============>

#include<iostream>
using namespace std;

// Function with float type parameter
float absolute(float val) {
    if(val < 0.0) {
        val = -val;
        return val;
    }
}

//Function with int type parameter
float absolute(int val) {
    if(val < 0) {
        val = -val;
        return 0;
    }
}

int main() {

//    Call function with int type parameter
    cout << " Absolute Value of -5 : " << absolute(-5) << endl;
    
    cout << " Absolute value of 5.5 : " << absolute(5.5f) << endl;

    return 0;
}