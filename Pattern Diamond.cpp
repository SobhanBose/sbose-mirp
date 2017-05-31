#include<iostream>
using namespace std;
int main()
{
	int i, j, c, n, space;
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
	for(int i=n; i>=1; --i)
    {
        for(int space=0; space<n-i; space++)
            cout << " ";

        for(int j = i; j <= 2*i-1; j++)
            cout << "*";

        for(int j = 0; j < i-1; j++)
            cout << "*";

        cout << endl;
    }

    return 0;
}

