#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		vector<int> v;
		int count=0;
		for(int i=0;i<s.length();i++)
		{
			if(s[i]=='1')
			{
				v.push_back(i);
			}
		}
		if(v.size()==0)
		{
			cout<<0<<'\n';
		}
		else if(v.size()==1)
		{
			cout<<1<<'\n';
		}
		else
		{
			for(int i=0;i<v.size()-1;i++)
		{
			if(v[i]+1!=v[i+1])
			{
				count++;
			}
		}
		cout<<count+1<<'\n';	
		}
	}
	return 0;
}
