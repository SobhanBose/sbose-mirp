#include<iostream>
using namespace std;
int main()
{
   float n, a, b, c, f;
   cout<<"Enter the number of digits";
   cin>>n;
   a=0;
   for(b=0; b<n; b++)
   {															
      cout<<"Enter number: ";
      cin>>c;
      a=a+c;
   }
   f=a/n;
   cout<<"The average is "<<f<<endl;
   return 0;
}
