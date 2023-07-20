#include <iostream>
using namespace std;
class volume
{
public:
    volume(float l)
    {
        cout << "Enter length: ";
        cin >> l;
        cout << "Volume of cube: " << l * l * l << endl
             << endl;
    }

    volume(float l, float b, float h)
    {
        cout << "Enter length: ";
        cin >> l;
        cout << "Enter bidth: ";
        cin >> b;
        cout << "Enter height: ";
        cin >> h;
        cout << "Volume of Rectangular cube: " << l * b * h << endl
             << endl;
    }

    volume(float i, float d, float pie, float r)
    {
        cout << "Enter Radius: ";
        cin >> r;
        cout << "Volume of Sphere: " << (4 * pie * r * r * r) / 3 << endl
             << endl;
    }

    volume(float h, float r)
    {
        cout << "Enter Radius: ";
        cin >> r;
        cout << "Enter Height: ";
        cin >> h;
        cout << "Volume of Cylinder: " << 3.14 * r * r * h << endl
             << endl;
    }
};

int main()
{
    volume a(5), b(5, 4, 3), c(4, 3, 3.14, 1), d(1, 1);
}