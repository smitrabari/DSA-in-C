#include<bits/stdc++.h>
using namespace std;

//Reverse an Array using Single Variable!!

void rev(int i,int n,int arr[])
{
	if(i >= n/2)
	{
		return ;
	}
	swap(arr[i],arr[n-i-1]);
	rev(i+1,n,arr);
}

int main()
{
	int n = 5;
	int arr[n] = {1,3,4,5,2};
	rev(0,n,arr);
	for(int j = 0;j < n;j++)
	{
		cout<<arr[j]<<" ";
	}
	return 0;
}