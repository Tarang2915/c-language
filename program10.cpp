#include <iostream>
using namespace std;
int main()
{
    float i, t, a;

    cout << "Enter amount:";
    cin >> a;

    cout << "Enter time in mopnth:";
    cin >> t;

    cout << "Enter interest:";
    cin >> i;

    cout<<"Total Interest amount:"<<(a*t*i)/100;

    cout<<"\nReturn amount:"<<(a*t*i)/100 + a;
}