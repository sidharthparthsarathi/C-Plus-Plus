#include<bits/stdc++.h>
using namespace std;
int stringtoInt(string p)
{
		int a=1000*(p[0]-'0')+100*(p[1]-'0')+10*(p[3]-'0')+(p[4]-'0');
		if(p[5]=='P' && a<1200)
		{
			a=a+1200;
		}
		else if(p[5]=='A' && a>1159)
		{
			a=a-1200;
		}
		return a;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		string p,l;
		cin>>p>>l;
		p=p+l;
		int tim=stringtoInt(p);
		int q;
		cin>>q;
		string ans="";
		while(q--)
		{
			string str1,t1,str2,t2;
			cin>>str1>>t1;
			str1=str1+t1;
			int tim1=stringtoInt(str1);
			cin>>str2>>t2;
			str2=str2+t2;
			int tim2=stringtoInt(str2);
			if(tim>=tim1 && tim<=tim2)
			{
				ans=ans+'1';
			}
			else
			{
				ans=ans+'0';
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
