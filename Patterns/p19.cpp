#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	for(int i = 0; i <= n ; i++)
	{
		for(int j = 0; j <= n-i; j++)
		{
			cout<<"*";
		}
		for(int j = 0; j < i; j++)
		{
			cout<<" ";
		}
		for(int j = 0; j < i; j++)
		{
			cout<<" ";
		}
		for(int j = 0; j <= n-i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}

	for(int i = 0; i <= n ; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			cout<<"*";
		}
		for(int j = 0; j < n-i; j++)
		{
			cout<<" ";
		}
		for(int j = 0; j < n-i; j++)
		{
			cout<<" ";
		}
		for(int j = 0; j <= i; j++)
		{
			cout<<"*";
		}
		cout<<endl;
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