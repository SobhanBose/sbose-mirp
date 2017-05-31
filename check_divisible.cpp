#include<iostream>
using namespace std;
int main()
{
   int n, p;
   cout<<"Enter a number: ";
   cin>>n;
   cout<<"Enter another number: ";
   cin>>p;
   if(n%p==0)
   cout<<"The number is divisible by the first number" <<endl;
   else
   cout<<"The number is not divisible by the first number" <<endl;
   return 0;
}
