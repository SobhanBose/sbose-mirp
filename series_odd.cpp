#include<iostream>
using namespace std;
int main()
{
  int n, i;
  cout<<"Enter the number till what you want to print: ";
  cin>>n;
  for(i=1; i<=n; i+=2)
  {
    cout<<i<<endl;
  }
  return 0;
}