#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		long long min=arr[0];
		long long max=arr[0];
		for(int i=0;i<n;i++)
		{
		    if(arr[i]<min)
		    {
		        min=arr[i];
		    }
		    if(arr[i]>max)
		    {
		        max=arr[i];
		    }
		}
		long long int m=2*abs(max-min);
		cout<<m<<'\n';
	}
	return 0;
}
