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
		int n,k;
		cin>>n>>k;
		string s;
		cin>>s;
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]=='*')
			{
				count++;
			}
			else
			{
				count=0;
			}
			if(count==k)
			{
				break;
			}
		}
		if(count!=k)
		{
			cout<<"NO\n";
		}
		else
		{
		    cout<<"YES\n";
		}
	}
	return 0;
}
