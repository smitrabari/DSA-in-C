#include<bits/stdc++.h>
using namespace std;

void divisor(int n) 
{
    set<int> st;
    for(int i = 1;i<=n;i++)
    {
        for(int j = 1;j<=n;j++)
        {
            if(i*j==n)
            {
                st.insert(st.begin(),i);
                st.insert(st.begin(),j);
            }
        }
    }
    for(int it : st)
    {
        cout<<it<<" ";
    }  
}

int main()
{
	int n;
	cout<<"Enter Number - ";
	cin>>n;
	divisor(n);
	return 0;
}