#include<bits/stdc++.h>
#include<string>
using namespace std;

void armstrong(long n) 
{
    int rev = 0;
    int org = n;
    int c = n;
    int count = 0;
    while(c>0)
    {
        c = c / 10;
        count++;
    }
    while(n>0)
    {
        int lastdigit = n % 10;
        rev = rev + pow(lastdigit,count);
        n = n / 10; 
    }
    cout<<org<<" "<<rev<<" "<<count<<endl;
    if(org == rev)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }
}

int main()
{
	int n;
	cout<<"Enter Number - ";
	cin>>n;
	armstrong(n);
	return 0;
}