#include<bits/stdc++.h>
using namespace std;

//Map Hashing!!

int main()
{
	// Input of Array size and Array Elements!!
	int n;
	cout<<"Size";
	cin>>n;
	int arr[n];
	map<int,int> mpp;
	for(int i = 0;i<n;i++)
	{
		cout<<"Array Element "<<i<<" ";
		cin>>arr[i];
		mpp[arr[i]]++;
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
		cout<<mpp[num]<<endl;
	}

	return 0;
}