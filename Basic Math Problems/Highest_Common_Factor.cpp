#include<bits/stdc++.h>
using namespace std;

int HCF(int a, int b) {
        int count = 0;
        int hcd=0;
        for(int i = min(a,b);i>=1;i++)
        {
            if(a%i==0 && b%i==0)
            {
                hcd = i;   
            }
        }
        cout<<hcd;
        return hcd;
    }

int main()
{
	int a,b;
	cout<<"Enter Number - ";
	cin>>a;
    cout<<endl<<"Enter Number - ";
    cin>>b;
	HCF(a,b);
	return 0;
}