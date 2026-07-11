#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Input of Array size and Array Elements!!
	int n;
	cout<<"Size";
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++)
	{
		cout<<"Array Element "<<i<<" ";
		cin>>arr[i];
	}

	//Maximum Element in Array!!
	int max = *max_element(arr,arr+n);

	//Precomputing!!
	int hash[max+1]={0};
	for(int j = 0;j<n;j++)
	{
		hash[arr[j]] += 1;
	}

	//Fetching!!
	int q;
	cout<<"No. of Elements to be searched ";
	cin>>q; //How many Searching Elements Input!!
	while(q--)
	{
		int num;
		cout<<"Number -";
		cin>>num;
		//Fetch!!
		cout<<hash[num]<<endl;
	}

	return 0;
}