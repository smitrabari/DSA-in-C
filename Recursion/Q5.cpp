#include<bits/stdc++.h>
using namespace std;

//Pirnt Linearly from N to 1 in Backtracking!!

void Linearly(int i, int n)
{
	if(n<1)
	{
		return;
	}
	cout<<n<<endl;
	Linearly(i,n-1);
}

int main()
{
	int n = 10;
	Linearly(n , n);
	return 0;
}