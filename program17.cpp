#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter value of a:";
    cin >> a;

    cout << "Enter value of b:";
    cin >> b;

    cout << "Enter value of c:";
    cin >> c;

    if (a > b)
    {
        if (a > c)
        {
            cout << a << " is big";
        }
        else
        {
            cout << c << " is big";
        }
    }
    else
    {

        cout << b << " is big";
    }
}