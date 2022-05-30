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
		string s;
		cin>>s;
		int size=s.size();
		if(size<5)
		{
			cout<<s<<'\n';
			continue;
		}
		for(int i=0;i<=size-5;i++)
		{
			if(s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y')
			{
				s[i+2]='w';
				s[i+3]='r';
				s[i+4]='i';
			}
		}
		cout<<s<<'\n';
	}
	return 0;
}
