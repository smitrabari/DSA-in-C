#include<bits/stdc++.h>
using namespace std;

//Factorial!!

int Fact(int n)
{
	if(n==1)
	{
		return 0;
	}
	return n * Fact(n-1);
}

int main()
{
	int n = 5;
	Fact(n);
	return 0;
}