#include<bits/stdc++.h>
using namespace std;

//Fibonacci Series!!

int Series(int n)
{
	if(n<=1)
	{
		return n;
	}
	return Series(n-1)+Series(n-2);
}

int main()
{
	int n;
	cout<<Series(4);
	return 0;
}