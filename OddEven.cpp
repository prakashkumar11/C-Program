#include<iostream>
using namespace std;

class oddEven
{
    private:
    int num;

    public:
    void getdata();
    void putdata();
};

void oddEven :: getdata() {
    cout <<"Enter number to check => ";
    cin >>num;
}

void oddEven :: putdata() {
    
    if(num % 2 == 0 ) {
        cout << num << "is Even number ";
    } else {
        cout << num << "is Odd number ";
    }
}

int main()
{
    oddEven obj;
    obj.getdata();
    obj.putdata();

    return 0;
}