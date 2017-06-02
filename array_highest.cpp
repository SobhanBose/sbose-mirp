#include<iostream>
using namespace std;
int main()
{
  int a[10], b, i, c;
  for(i=0; i<10; i++)
  {
     cout<<"Enter number " <<i+1 <<": ";
     cin>>a[i];
     if(a[i]>a[i+1])
     {
     b=a[i];
     c=i;
     }
  } 
  cout<<b<<" is the highest number\n";
  return 0;
}
     
