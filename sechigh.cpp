#include<iostream>
using namespace std;
int main()
{
  int n, i, a, max=-10000, secmax;
  cout<<"Enter the number of integers: ";
  cin>>n;
  for(i=0; i<n; i++)
  {
    cout<<"Enter number " <<i+1 <<": ";
    cin>>a;
    if(a>max)
    {
    secmax=max;
    max=a; 
    }
  }
  cout<<"The second highest is "<<secmax<<endl;
  return 0;
}
  


