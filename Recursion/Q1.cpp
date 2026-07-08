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

void name1(int i,int n)
{
	if(i>n)
	{
		return;
	}
	cout<<"Hello!!"<<endl;
	name1(i+1 , n);
}

int main()
{
	int n = 10;
	name1(1,n);
	return 0;
}