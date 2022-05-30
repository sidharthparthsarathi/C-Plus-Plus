#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{   fast
	int t;
	cin>>t;
	while(t--)
	{
		int xa,xb,A,B;
		cin>>xa>>xb>>A>>B;
		cout<<(A/xa)+(B/xb);
		cout<<'\n';
	}
	return 0;
}
