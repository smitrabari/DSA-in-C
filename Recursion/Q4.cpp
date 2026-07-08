#include<bits/stdc++.h>
using namespace std;

//Pirnt Linearly from 1 to N using backtraking!!

void Linearly(int i, int n)
{
	if(i<1)
	{
		return;
	}
	Linearly(i-1,n);
	cout<<i<<endl;
}

int main()
{
	int n = 10;
	Linearly(n , n);
	return 0;
}