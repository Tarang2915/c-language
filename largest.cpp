#include <iostream>
using namespace std;
class Largest
{

public:
    int x, y;
    void takedata()
    {
        cout << "Enter First Value: ";
        cin >> x;
        cout << "Enter Second Value: ";
        cin >> y;
    }
    friend Largest max(Largest);
};

Largest max(Largest t)
{
    if (t.x > t.y)
    {
        cout << "Largest Value: " << t.x;
    }
    else
    {
        cout << "Largest Value: " << t.y;
    }
}

int main()
{
    Largest i;

    i.takedata();

    max(i);
}
