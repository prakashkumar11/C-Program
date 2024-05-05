#include<iostream>
using namespace std;

class wall {
    private:
    double length;

    public:
    wall() {
        length = 5.5;
        cout <<"Creating a wall...!" <<endl;
        cout <<"Length = " <<length <<endl;
    }
};

class person {
    private:
    int x, y;

    public:
    person() {
        x = 10;
        y = 20;
    }
    void putdata() {
        int z = x + y;
        cout <<" Sum of number : " <<z <<endl;
    }
};

int main()
{
    person p1;
    p1.putdata();

    return 0;
}