#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	for(int i = 0; i < n ; i++)
	{
		for (int e = 0; e < i; e++)
		{
			cout<<" ";
		}

		for (int j = 0; j < 2*n - (2*i+1); j++)
		{
			cout<<"*";
		}

		for (int e = 0; e < i; e++)
		{
			cout<<" ";
		}
		cout<<"\n";
	}
	
}

int main()
{
	int n;
	cout<<"Enter Number - ";
	cin>>n;
	smit(n);
	return 0;
}