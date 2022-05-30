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
		int n;
		cin>>n;
		int arr[n];
		long long int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			sum=(long long)(sum+arr[i]);
		}
		if(sum%2==0)
		{
			cout<<0<<'\n';
		}
		else
		{
			int counter=0;
			bool flag=false;
			for(int i=0;i<n;i++)
			{
				sum=sum-arr[i];
				int p=(ceil)((double)arr[i]/2)-1;
				if(p<0)
				{
					p=0;
				}
				long long int po=pow(arr[i],p);
				sum=(long long)(sum+po);
				counter++;
				if(sum%2==0)
				{
					flag=true;
					break;
				}
				else
				{
					counter--;
					sum=sum-po+arr[i];
				}
			}
			if(flag)
			{
				cout<<counter<<'\n';
			}
			else
			{
				cout<<-1<<'\n';
			}
		}
	}
	return 0;
}
