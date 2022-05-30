#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	unsigned long long n;
	unsigned long long int a,b;
	cin>>n;
	if(n%2==0)
	{
		a=n/2;
		b=n/2;
		cout<<a<<' '<<b;
	}
	if(n%2==1)
	{
		a=0;
		b=n;
		cout<<a<<' '<<b;
	}
	cout<<endl;
}
}
