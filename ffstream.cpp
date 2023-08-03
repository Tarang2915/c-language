#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char input[50];
    ofstream os;
    os.open("xyz.txt");
    cout<<"Writing to a text file: "<<endl;
    cout<<"Please Enter Your Name: "<<endl;
    cin.getline(input,100);
    os<<input<<endl;
    cout<<"Please Enter Contact Number: "<<endl;
    cin>>input;
    cin.ignore();
    os<<input<<input<<endl;
    os.close();

    ifstream is;
    string line;
    is.open("xyz.txt");
    cout<<"Reading from a text file: "<<endl;
    while(getline(is,line))
    {
        cout<<line<<endl;
    }
    is.close();
    return 0;
}