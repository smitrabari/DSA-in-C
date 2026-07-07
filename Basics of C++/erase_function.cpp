#include<bits/stdc++.h>
using namespace std;

void earse_function()
{
	vector<int> v = {10,20,30,40,50};
	v.erase(v.begin()+2);
	for(int i : v)
	{
		cout<<i<<" ";
	}
}

void earse_start_end_function()
{
	vector<int> v = {10,20,30,40,50};
	v.erase(v.begin()+2,v.begin()+4);
	for(int i : v)
	{
		cout<<i<<" ";
	}
}

int main()
{
	earse_start_end_function();
	return 0;
}