#include <iostream>
using namespace std;
class area
{

public:
    area(float l)
    {
        cout << "Area of Square: " << l * l << endl
             << endl;
    }

    area(float l, float b)
    {
        cout << "Area of Rectangle: " << l * b << endl
             << endl;
    }

    area(float a, float h, float b)
    {
        cout << "Area of Triangle: " << a * b * h << endl
             << endl;
    }

    area(float a, float pie, float r, float l)
    {
        cout << "Area of Sylinder: " << a * pie * r * l << endl
             << endl;
    }
};

int main()
{
    area a(4),b(3,5),c(0.5,4,7),d(2,3.14,10,7);
}
