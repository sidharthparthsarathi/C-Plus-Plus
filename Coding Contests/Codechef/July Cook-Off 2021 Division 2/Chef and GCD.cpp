#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define ll int64_t
#define ull uint64_t
#define mod 1000000007
int main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
		int x,y;
		cin>>x>>y;
		int gcdxy=__gcd(x,y);
		if(gcdxy>1)
		{
			cout<<0;
		}
		else
		{
		  int newValue1=x+1;
		  int newValue2=y+1;
		  int newgcd1=__gcd(newValue1,y);
		  int newgcd2=__gcd(newValue2,x);
		  if(newgcd1>1 || newgcd2>1)
		  {
		  	cout<<1;
		  }
		  else
		  {
		  	cout<<2;
		  }
		}
		cout<<'\n';
	}
	return 0;
}
