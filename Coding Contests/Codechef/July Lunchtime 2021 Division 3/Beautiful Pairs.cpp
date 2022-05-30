#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define ll int64_t
#define ull uint64_t
#define mod 1000000007
int main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll* arr=new ll[n];
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		sort(arr,arr+n);
		ll count=0;
		unordered_map<ll,ll> m;
		for(int i=0;i<n;i++)
		{
			m[arr[i]]=i+1;
		}
		for(int i=0;i<n;i++)
		{
			count+=2*(n-m[arr[i]]);
		}
		cout<<count;
		delete [] arr;
		cout<<'\n';
	}
	return 0;
}
