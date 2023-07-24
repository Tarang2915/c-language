#include <iostream>
using namespace std;
class Box
{
    int l, b, h;

public:
    void getdata(int x, int y, int z)
    {
        l = x, b = y, h = z;
    }

    float displaydata()
    {
        return l * b * h;
    }

    Box operator--()
    {
        Box t;

        t.l = --l;
        t.b = --b;
        t.h = --h;

        return t;
    }
};

int main()
{
    Box a, b;

    a.getdata(2, 3, 4);
    cout << "Volume of Box A: " << a.displaydata() << endl;

    b = --a;
    cout << "Volume of Box B: " << b.displaydata() << endl;
}