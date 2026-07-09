#include<bits/stdc++.h>
using namespace std;

//Reverse an Array!!

int rev(int i,int n)
{
	if(i>=n)
	{
		return
	}
	return rev(i+1,n-1);
}

int main()
{
	int n = 5;
	int arr[n] = {1,3,4,5,2,5,4};
	rev(0,n);
	return 0;
}