
#include <iostream>
using namespace std;
class REPORT
{
private:
    int adno, i;
    char name[20];
    float mark[5], average;

    float GETAVG()
    {
        return (mark[0] + mark[1] + mark[2] + mark[3] + mark[4]) / 5;
    }

public:
    void READINFO()
    {
        cout << "enter the admission number : ";
        cin >> adno;
        cout << "Enter a name : ";
        cin >> name;
        cout << "Enter a mark for 5 subject ";
        ;
        for (i = 0; i < 5; i++)
        {
            cin >> mark[i];
        }
        cout << endl;
        average = GETAVG();
    }

    void DISPLAYINFO()
    {
        cout << "admission number : " << adno << endl;
        cout << "name : " << name << endl;
        cout << "Marks of Subject 1: " << mark[0] << endl;
        cout << "Marks of Subject 2: " << mark[1] << endl;
        cout << "Marks of Subject 3: " << mark[2] << endl;
        cout << "Marks of Subject 4: " << mark[3] << endl;
        cout << "Marks of Subject 5: " << mark[4] << endl;
        cout << "average : " << average << endl;
    }
};

int main()
{
    REPORT r;
    r.READINFO();
    r.DISPLAYINFO();
}
