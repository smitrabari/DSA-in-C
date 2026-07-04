#include<bits/stdc++.h>
using namespace std;

int commonFactors(int a, int b) {
        int count = 0;
        for(int i = 1;i<=min(a,b);i++)
        {
            if(a%i==0 && b%i==0)
            {
                count++;
            }
        }
        cout<<count;
        return count;
    }

int main()
{
	int a,b;
	cout<<"Enter Number - ";
	cin>>a;
    cout<<endl<<"Enter Number - ";
    cin>>b;
	commonFactors(a,b);
	return 0;
}