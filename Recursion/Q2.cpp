#include<bits/stdc++.h>
using namespace std;

//Pirnt Linearly from 1 to N

void Linearly(int i, int n)
{
	if(i>n)
	{
		return;
	}
	cout<<i<<endl;
	Linearly(i+1,n);
}

int main()
{
	int n = 10;
	Linearly(1 , n);
	return 0;
}