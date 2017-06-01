#include<iostream>
using namespace std;
int main()
{
   int a[10], i, temp=0;
   for(i=0; i<10; i++)
   {
     cout <<"Enter number "<<i+1<<":";
     cin>>a[i];
   }
   for(i=0; i<10; i++)
   {
     if(a[i]>=10)
     { 
       temp++;
     }
   }
   cout<<temp<<" numbers are greater than or equal to 10\n";
   return 0;
} 
     
