#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int N,H,x;
	cin>>N>>H>>x;
	int *arr=new int[N];
	for(int i=0;i<N;i++)
	{
		cin>>arr[i];
		if(x+arr[i]==H)
		{
			cout<<"YES";
			return 0;
		}
	}
	cout<<"NO";
	delete [] arr;
	return 0;
}
