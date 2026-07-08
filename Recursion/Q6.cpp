#include<bits/stdc++.h>
using namespace std;

void Sumation(int n,int sum)
{
	if(n<1)
	{
		cout<<sum<<endl;
		return;
	}
	Sumation(n-1,n+sum);
}

int main()
{
	int n = 5;
	int sum = 0;
	Sumation(n,sum);
	return 0;
}