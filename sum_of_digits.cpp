#include<iostream>
using namespace std;
int main()
{
   int a, b, c;
   cout<<"Enter the number: ";
   cin>>a;
   c=0;
   while(a>0)
   {
     b=a%10;
     c=c+b;
     a=a/10;
   }
   cout<<"The sum of the digits is " <<c <<endl;
   return 0;
}
     
