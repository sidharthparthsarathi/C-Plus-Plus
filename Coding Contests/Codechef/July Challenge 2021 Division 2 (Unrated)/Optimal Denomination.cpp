#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define ll int64_t
int main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
		fast
		ll n;
		cin>>n;
		ll* arr=new ll[n];
		ll totalSum=0;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			totalSum+=arr[i];
		}
		ll* forward=new ll[n+1]();//For Safety
		ll* backward=new ll[n+1]();//For Safety
		ll* hcf=new ll[n];
		ll sum=0;
		forward[0]=arr[0];
		backward[n-1]=arr[n-1];
		ll i=1,j=n-2;
		while(i<n && j>=0)
		{
			forward[i]=(__gcd(forward[i-1],arr[i]));
			backward[j]=(__gcd(backward[j+1],arr[j]));
			i++;
			j--;
		}
		ll ans=LLONG_MAX;
		hcf[0]=backward[1],hcf[n-1]=forward[n-2];
		for(ll i=0;i<n;i++)
		{
		    if(i==0)
		    {
		        hcf[i]=backward[i+1];
		    }
			else if(i==(n-1))
			{
				hcf[i]=forward[i-1];
			}
			else
			{
			hcf[i]=(__gcd(backward[i+1],forward[i-1]));
		    }
		    sum=hcf[i]!=0 ? ((totalSum-arr[i])/hcf[i])+1 : 1;
			ans=min(ans,sum);
		}
		delete [] arr;
		delete [] forward;
		delete [] backward;
		delete [] hcf;
		cout<<ans<<'\n';
	}
	return 0;
}
