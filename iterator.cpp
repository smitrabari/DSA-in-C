#include<bits/stdc++.h>
#include<vector>
using namespace std;

void function_begin()
{
	vector<int> v = {10,20,30,40,50};
	vector<int>::iterator it = v.begin();
	cout<< *it;
}

void function_end()
{
	vector<int> v = {10,20,30,40,50};
	vector<int>::iterator it = v.end();
	cout<< *it;
}

void function_reverse_end()
{
	vector<int> v = {10,20,30,40,50};
	vector<int>::reverse_iterator it = v.rend();
	cout<< *(it);
}

void function_reverse_begin()
{
	vector<int> v = {10,20,30,40,50};
	vector<int>::reverse_iterator it = v.rbegin();
	cout<< *(it);
}

void back()
{
	vector<int> v = {10,20,30,40,50};
	cout<< v.back();
}

int main()
{
	back();
	return 0;
}