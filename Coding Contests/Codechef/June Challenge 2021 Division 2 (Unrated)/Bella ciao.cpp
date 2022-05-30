#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define ll uint64_t
int main()
{
	fast //0.03Sec
	//Without Fast 0.27 sec
	int t;
	cin>>t;
	while(t--)
	{
		ll D,days,P,Q;
		cin>>D>>days>>P>>Q;
		ll div=D/days;
		ll rem=D%days;
		cout<<(days*(div*P+(Q*(div-1)*div/2))+rem*(P+(div*Q)))<<'\n';
	}
}
