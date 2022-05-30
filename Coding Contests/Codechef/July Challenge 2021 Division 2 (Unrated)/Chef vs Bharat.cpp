//O(n) Using Prefix Sum
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define ll int64_t
#define MAX 100001
#define mod 1000000007
ll power(ll n,ll b)
{
	ll ans=1;
	if(n==0)
	{
		return 0;
	}
	while(b>0)
	{
		if(b&1)
		{
			ans=((ans%mod)*(n%mod))%mod;
		}
		n=((n%mod)*(n%mod))%mod;
		b>>=1;
	}
	return ans;
}
ll chefora(ll n)
{
	ll newInt=n/10;
	while(newInt!=0)
	{
		ll rem=newInt%10;
		n=n*10+rem;
		newInt/=10;
	}
	return n;
}
int main()
{
	fast
	ll* arr=new ll[MAX]();
	ll* prefixSum=new ll[MAX]();
	for(ll i=1;i<MAX;i++)
	{
		arr[i]=chefora(i);
		prefixSum[i]=prefixSum[i-1]+arr[i];
	}
	int t;
	cin>>t;
	while(t--)
	{
		ll l,r;
		cin>>l>>r;
		ll rangeSum1=prefixSum[r]-prefixSum[l];//We Want Sum From L to R;
		cout<<power(arr[l],rangeSum1)<<'\n';
	}
	delete [] arr;
	delete [] prefixSum;
	return 0;
}
