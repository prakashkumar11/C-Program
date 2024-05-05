#include<iostream>
using namespace std;


int sumOfArr(int arr[], int size)
{
    if(size==0)
        return 0;
    else
        return arr[0]+sumOfArr(arr+1, size-1);
}

int main()
{

    int arr[]={10, 20, 30, 40};
    int size=sizeof(arr) / sizeof(arr[0]);

    cout <<sumOfArr(arr, size);




    return 0;
}