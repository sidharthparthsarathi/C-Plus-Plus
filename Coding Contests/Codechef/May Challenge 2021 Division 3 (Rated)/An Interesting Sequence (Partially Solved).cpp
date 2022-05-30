#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	fast
	int *arr=new int[2*1000+1];
	for(int i=0;i<2001;i++)
	{
		arr[i]=(i+1)*(i+1);
	}
	int t;
	cin>>t;
	while(t--)
	{
		int k;
		cin>>k;
		long long int sum=0;
		for(int i=0;i<2*k;i++)
		{
		sum=(unsigned long long)sum+(unsigned long long)(__gcd(k+arr[i],k+arr[i+1]));	
		}
		cout<<sum;
		cout<<'\n';
	}
}
