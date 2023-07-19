#include <iostream>
using namespace std;
class Book
{
private:
    int bookno, n;
    char booktitle[30];
    float price, totalprice;

    float TOTAL_COST()
    {
        return n * price;
    }

public:
    void INPUT()
    {
        cout << "Enter Book Number: ";
        cin >> bookno;
        cout << "Enter Book Title: ";
        cin >> booktitle;
        cout << "Enter Book Price: ";
        cin >> price;

        PURCHASED();
    }

    int PURCHASED()
    {
        cout << "Enter Copies to be Purchased: ";
        cin >> n;

        totalprice = TOTAL_COST();
    }

    void SHOWINFO()
    {
        cout << "Book Number: " << bookno << endl;
        cout << "Book Title: " << booktitle << endl;
        cout << "Book Price: " << price << endl;
        cout << "Number of Books to be Purchased: " << n << endl;
        cout << "Total Price: " << totalprice << endl;
    }
};

int main()
{
    Book b;

    b.INPUT();
    b.SHOWINFO();
}