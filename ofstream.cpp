#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream abc("abc.txt");
    if (abc.is_open())
    {
        abc<<"Hello World";
        abc<<"\nNow learning CPP Language";
        abc.close();
    }
    else{
        cout<<"File Opening is Fail";
    }
}