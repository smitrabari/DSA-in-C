#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	for(int i = 1; i <= n ; i++)
	{
		char a = 'A' + i - 1;
		for(int j = 1 ; j <= i ; j++)
		{
			cout<<a;
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