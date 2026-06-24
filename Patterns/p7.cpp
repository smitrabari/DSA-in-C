#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	for(int i = 0; i < n ; i++)
	{
		for (int e = 0; e < n-i-1; e++)
		{
			cout<<" ";
		}

		for (int j = 0; j < 2*i+1; j++)
		{
			cout<<"*";
		}

		for (int k = 0; k < n-i-1; k++)
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