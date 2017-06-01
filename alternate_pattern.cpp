#include<iostream>
using namespace std;
int main()
{
   int  a, b, c, rows, columns;
   cout << "Enter the number of rows: " <<endl;
   cin >> rows;
   cout << "Enter the number of columns: " <<endl;
   cin >> columns;
   for (a=1; a<=columns; a++)
   {
     for (b=1; b<=rows; b++)
     {
       cout << " * ";
     }
     b=1;
     cout <<"\n";
     for (c=1; c<=rows-1; c++)
     {
       cout << "  *";
     }
     cout <<"\n";
   }
   return 0;
}
