#include<bits/stdc++.h>
using namespace std;

//Sum of first N number sum with return function!!

int Sumation(int n)
{
	if(n==0)
	{
		return 0;
	}
	return n + Sumation(n-1);
}

int main()
{
	int n = 5;
	Sumation(n);
	return 0;
}