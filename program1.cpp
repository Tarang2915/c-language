#include <iostream>
using namespace std;
int main()
{
   int s1, s2, s3, total;
   float per;

   cout << "Enter Marks of s1:";
   cin >> s1;

   cout << "Enter Marks of s2:";
   cin >> s2;

   cout << "Enter Marks of s3:";
   cin >> s3;

   total = s1 + s2 + s3;

   cout << "Total :" << total;

   per = total / 3.0;

   cout << "\nPercentage :" << per;
}