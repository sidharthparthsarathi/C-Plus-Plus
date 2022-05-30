#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,k;
		cin>>n>>x>>k;
		if(x%k==0 || ((n+1)-x)%k==0)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}
		cout<<'\n';
	}
}
