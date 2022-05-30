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
		int x,a,b;
		cin>>x>>a>>b;
		cout<<(a+((100-x)*b))*10;
		cout<<'\n';
	}
}
