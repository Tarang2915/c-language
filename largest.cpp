#include <iostream>
using namespace std;
class Largest
{
    int x, y, z;

public:
    void takedata()
    {
        cout << "Enter First Value: ";
        cin >> x;
        cout << "Enter Second Value: ";
        cin >> y;
    }
    friend Largest max(Largest);

    void showdata()
    {
        cout << "Largest Value: " << z;
    }
};

Largest max(Largest t)
{
    Largest l;
    if (t.x > t.y)
    {
        l.z = t.x;
        return l;
    }
    else
    {
        l.z = t.y;
        return l;
    }
}

int main()
{
    Largest i, j;

    i.takedata();

    j = max(i);
    j.showdata();
}
