#include<bits/stdc++.h>
using namespace std;

//Palindrome String!!

bool Palindrome(int i,string &n)
{
	if(i >= n.size()/2)
	{
		return true;
	}
	if(n[i] != n[n.size()-i-1]){
		return false;
	}
	return Palindrome(i+1,n);
}

int main()
{
	string n = "MADAM";
	cout<<Palindrome(0,n);
	return 0;
}