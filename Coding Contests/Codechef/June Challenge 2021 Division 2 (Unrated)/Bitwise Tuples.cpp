#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define MOD 1000000007
#define ll uint64_t
ll power(ll n,ll m)
{
	ll Ans=1;
	while(m>0)
	{
		if(m%2==1)
		{
			Ans=(Ans*n)%MOD;
		}
		n=(n*n)%MOD;
		m=m>>1;
	}
	return Ans;
}
int main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		n=power(2,n)-1;
		cout<<power(n,m)<<'\n';
	}
}
