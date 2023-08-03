#include<iostream>
using namespace std;
template<class Test>

void display(Test t1)
{
    cout<<"Displaying Template: "<<t1<<endl;
}

template<class x,class y>

void Addition(x a,y b)
{
    cout<<"Addition: "<<a+b<<endl;
}

int main()
{
    display(200);
    display("Hello");
    display('T');
    Addition(32,54);
    Addition('A',132);
}
