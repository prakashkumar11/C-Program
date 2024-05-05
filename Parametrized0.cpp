#include<iostream>
using namespace std;

class wall {
    private:
    double length;
    double height;

    public:
    wall(double len, double hgt) {
        length = len;
        height = hgt;
    }

    double calculateArea() {

        return length * height;
    }

};

class area {
    private:
    int length;
    int height;

    public:
    area(int len, int hgt) {
        length = len;
        height = hgt;
    }

    int calculateArea0() {
        return length * height;
    }
    
};

int main()
{
    area a(10, 20);

    cout <<"Area of a = " << a.calculateArea0();

    return 0;
}