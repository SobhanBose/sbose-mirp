#include<iostream>
using namespace std;
int main()
{
  int n, a, b, d, e;
  cout<<"Enter the number of rows: ";
  cin>>n;
  e=0;
  for(a=0; a<n; a++)
  { 
    for(b=a; b<n; b++)
    { 
      cout<<"* ";
    }
    e++;
    for(d=1; d<=a+1; d++)
    {
      cout<<e <<" ";
    }
    cout<<endl;
  }
  return 0;
}  

