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
		int n,k;
		cin>>n>>k;
		int* arr=new int[n];
		int bits[32]={0};
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<32;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(arr[j] & (1<<i))
				{
					bits[i]++;
				}
			}
		}
		ll sum=0;
		for(int i=0;i<32;i++)
		{
			sum+=(ll)(ceil((double)bits[i]/k));
		}
		cout<<sum<<'\n';
		delete [] arr;
	}
	return 0;
}
