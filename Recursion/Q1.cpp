#include<bits/stdc++.h>
using namespace std;

void name(int n)
{
	if(n != 0)
	{
		cout<<"Hello"<<endl;
		n--;
	}
	name(n);
}

int main()
{
	int n = 10;
	name(n);
	return 0;
}