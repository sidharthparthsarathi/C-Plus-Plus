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
	double k1,k2,k3,v,final_time,record=9.58;
	cin>>k1>>k2>>k3>>v;
	final_time=100/(double)(k1*k2*k3*v);
	final_time=(int)(final_time*100+.5);
	final_time=(double)(final_time)/100;
	if(final_time<record)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
    }
    return 0;
}
