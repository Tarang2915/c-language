#include <iostream>
using namespace std;
class student
{
private:
    int adminno;
    char sname[20];
    float eng, maths, sci, total;

    float ctotal()
    {
        return eng + maths + sci;
    }

public:
    void Takedata()
    {
        cout << "Enter Admin Number: ";
        cin >> adminno;
        cout << "Enter Name: ";
        cin >> sname;
        cout << "Enter Maths Marks: ";
        cin >> maths;
        cout << "Enter Science Marks: ";
        cin >> sci;
        cout << "Enter English Marks: ";
        cin >> eng;

        total = ctotal();
    }

    void showdata()
    {
        cout << "Admin Number: " << adminno << endl;
        cout << "Student Name: " << sname << endl;
        cout << "Science Marks: " << sci << endl;
        cout << "Maths Marks: " << maths << endl;
        cout << "English Marks: " << eng << endl;
        cout << "Total Marks: " << total << endl;
    }
};

int main()
{
    student s;

    s.Takedata();
    s.showdata();
}