#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define m 1000000007
int main()
{
	fast
	int t;
	cin>>t;
	int *arr=new int[100000];
	arr[0]=1;
	for(int i=1;i<=100000;i++)
	{
		arr[i]=(arr[i-1]*2)%m;
	}
	while(t--)
	{
		int n;
		cin>>n;
		cout<<arr[n-1]<<'\n';
	}
	delete [] arr;
	return 0;
}
