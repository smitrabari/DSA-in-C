#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	for(int i = 1; i <= n ; i++)
	{
		for(char j = 'A' ; j < 'A' + n - i + 1 ; j++)
		{
			cout<<j;
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