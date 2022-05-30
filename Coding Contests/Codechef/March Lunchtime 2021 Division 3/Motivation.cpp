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
		int n,x;
		cin>>n>>x;
		int max=INT_MIN;
		for(int i=0;i<n;i++)
		{
			int s,r;
			cin>>s>>r;
			if(r>max && s<=x)
			{
				max=r;
			}
		}
		cout<<max<<'\n'; 
	}
	return 0;
}
