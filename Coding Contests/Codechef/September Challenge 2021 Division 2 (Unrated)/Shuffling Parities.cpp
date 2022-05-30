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
		int n,NumOdd=0,NumEven=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			int x;
			cin>>x;
			if(x&1)
			{
				NumOdd++;
			}
			else
			{
				NumEven++;
			}
		}
		int sum=0;
		if(n&1)
		{
			sum=min((n/2)+1,NumEven)+min((n/2),NumOdd);
		}
		else
		{
			sum=min((n/2),NumEven)+min((n/2),NumOdd);
		}
		cout<<sum<<'\n';
	}
	return 0;
}
