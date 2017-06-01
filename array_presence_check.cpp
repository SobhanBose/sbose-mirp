#include<iostream>
using namespace std;
int main()
{
  int a[10], b=0, i, v;
  cout<<"Enter V: ";
  cin>>v;
  for(i=0; i<10; i++)
  {
    cout<<"Enter number "<<i+1<<": ";
    cin>>a[i];
    if(a[i]=v)
    b++;
  }
  if(b!=0)
  {
  cout<<"V is in the array\n";
  }
  else
  {
  cout<<"V is not in the array\n";
  }
  return 0;
}
