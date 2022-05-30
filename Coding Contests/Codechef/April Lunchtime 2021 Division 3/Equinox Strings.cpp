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
		int n,a,b;
		cin>>n>>a>>b;
		int sums=0,suma=0;
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			if(s[0]=='E' || s[0]=='Q' || s[0]=='U' || s[0]=='I' || s[0]=='N' || s[0]=='O' || s[0]=='X')
			{
				sums++;
			}
			else
			{
				suma++;
			}
		}
		long long int sarthak=(long long int)sums*a;
		long long int anuradha=(long long int)suma*b;
		if(sarthak>anuradha)
		{
			cout<<"SARTHAK";
		}
		else if(sarthak<anuradha)
		{
			cout<<"ANURADHA";
		}
		else
		{
			cout<<"DRAW";
		}
		cout<<'\n';
	}
}
