#include <iostream>
using namespace std;
class Marksheet
{
    float p, c, m, total, per;

public:
    void takedata()
    {
        cout << "Enter Marks of Physics:";
        cin >> p;
        cout << "Enter Marks of Chemistry:";
        cin >> c;
        cout << "Enter Marks of Maths:";
        cin >> m;
    }

    void caltotal()
    {
        total = p + c + m;
        cout << "Total : " << total << endl;
    }

    void calper()
    {
        per = (total * 100) / 300;
        cout << "Percentage: " << per << endl;
    }

    void grade()
    {
        if (per > 80 && per <= 100)
        {
            cout << "Your Grade:A" << endl
                 << endl;
        }
        else if (per > 60 && per <= 80)
        {
            cout << "Your Grade:B" << endl
                 << endl;
        }
        else if (per > 50 && per <= 60)
        {
            cout << "Your Grade:C" << endl
                 << endl;
        }
        else if (per >= 33 && per <= 50)
        {
            cout << "Your Grade:D" << endl
                 << endl;
        }
        else
        {
            cout << "SORRY YOU ARE FAILED" << endl
                 << endl;
        }
    }
};

int main()
{
    Marksheet a[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        a[i].takedata();
        a[i].caltotal();
        a[i].calper();
        a[i].grade();
    }
}