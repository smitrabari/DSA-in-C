#include<bits/stdc++.h>
using namespace std;

//Pirnt Linearly from 1 to N in REVERSE!!

void Linearly(int i, int n)
{
	if(i>n)
	{
		return;
	}
	cout<<n<<endl;
	Linearly(i,n-1);
}

int main()
{
	int n = 10;
	Linearly(1 , n);
	return 0;
}