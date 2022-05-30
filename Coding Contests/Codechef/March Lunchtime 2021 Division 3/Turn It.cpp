#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int u,v,a,s;
		cin>>u>>v>>a>>s;
		long long int uu=(long long)(v*v); 
		long long int inv=(long long)((u*u)-2*a*s);
		if(inv>uu)
		{
			cout<<"No\n";
		}
		else
		{
			cout<<"Yes\n";
		}
	}
	return 0;
}
