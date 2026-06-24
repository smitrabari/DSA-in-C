#include<bits/stdc++.h>
using namespace std;

void smit(int n)
{
	for(int i = 0; i < n ; i++)
	{
		for(char j = 'E' - i ; j <= 'E' ; j++)
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