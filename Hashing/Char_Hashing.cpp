#include<bits/stdc++.h>
using namespace std;

int main()
{
	// Input of Array size and Array Elements!!
	string s;
	cout<<"input ";
	cin>>s;

	//Precomputing!!
	int hash[256]={0};
	for(int j = 0;j<s.size();j++)
	{
		hash[s[j]]++;
	}

	//Fetching!!
	int q;
	cout<<"No. of Elements to be searched ";
	cin>>q; //How many Searching Elements Input!!
	while(q--)
	{
		char num;
		cout<<"Number -";
		cin>>num;
		//Fetch!!
		cout<<hash[num]<<endl;
	}

	return 0;
}