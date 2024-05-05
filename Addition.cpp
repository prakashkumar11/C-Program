#include<iostream>
using namespace std;

class addition
{
    private:
    int num1, num2;

    public:
    void getdata();
    void putdata();
};

void addition :: getdata()
{
    cout <<"Enter two number : ";
    cin >>num1 >>num2;
}

void addition ::putdata()
{
    int res = num1 + num2;
    cout <<"Sum of number : " <<res;
}

int main()
{
    addition ad;
    ad.getdata();
    ad.putdata();

    return 0;
}