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

    Box operator*(Box &n)
    {
        Box t;

        t.l = l * n.l;
        t.b = b * n.b;
        t.h = h * n.h;

        return t;
    }
};

int main()
{
    Box a, b, c;

    a.getdata(4, 5, 6);
    cout << "Volume of Box A: " << a.displaydata() << endl;

    b.getdata(3, 4, 5);
    cout << "Volume of Box B: " << b.displaydata() << endl;

    c = a * b;
    cout << "Volume of Box c: " << c.displaydata() << endl;
}