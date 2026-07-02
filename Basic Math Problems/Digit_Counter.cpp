#include<bits/stdc++.h>
using namespace std;

void Digit_Extraction(int n)
{
	int count=0;
	while(n>0)
	{
		for(int i = 0;n>0;i++)
		{
			count++;
			n = n / 10;
		}
	}
	cout<<count<<endl;

}

int main()
{
	int n;
	cout<<"Enter Number - ";
	cin>>n;
	Digit_Extraction(n);
	return 0;
}