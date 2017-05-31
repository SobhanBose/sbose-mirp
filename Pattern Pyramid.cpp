#include<iostream>
using namespace std;
int main()
{
	int i, j, c, n;
	cout<<"Enter the number of rows: ";
	cin>>n;
	for (i=1;i<=n;i++)
	{	
	c=i;
		for(j=1;j<=(n-i);j++)	
		cout<<" ";
			for (j=1;j<=i;j++)
			{
			cout<<"*";
			c++;
			}
			c=c-2;
				for(j=1;j<=(i-1);j++)
				{
				cout<<"*";
				c--;
				}
				cout<<endl;
		}
	
return 0;
}
