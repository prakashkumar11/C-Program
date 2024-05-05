#include<iostream>
using namespace std;

class posNegNum
{
    private:
    int num;
    public:
    void getdata();
    void putdata();
};

void posNegNum ::getdata()
{
    cout <<"Enter number : ";
    cin >>num;
}
void posNegNum ::putdata()
{
    if(num > 0) {
        cout << num <<" is positive number";
    } else if(num < 0) {
        cout << num <<" is negative number";
    } else {
        cout << num <<" is zero number";
    }
}

int main()
{
    posNegNum num;
    num.getdata();
    num.putdata();

    return 0;
}