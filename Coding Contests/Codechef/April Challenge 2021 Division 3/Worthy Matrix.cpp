#include<bits/stdc++.h>
#include<unistd.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int num,m,k;
		cin>>num>>m>>k;
		int arr[num+1][m+1];
		memset(arr,0,sizeof(arr));
		for(int i=1;i<=num;i++)
		{
			for(int j=1;j<=m;j++)
			{
				cin>>arr[i][j];
			}
		}
		for(int i=1;i<=num;i++)
		{
			for(int j=1;j<=m;j++)
			{
				arr[i][j]+=arr[i][j-1];
			}
		}
		for(int j=1;j<=m;j++)
		{
			for(int i=1;i<=num;i++)
			{
				arr[i][j]+=arr[i-1][j];
			}
		}
		int ans=0;
		for(int s=1;s<=num;s++)
		{
			for(int i=1;i<=num-s+1;i++)
			{
				int low=1;
				int high=m-s+1;
				int mid;
				int p;
				int flag=0;
				while(low<=high)
				{
					mid=(high+low)/2;
					int sum=arr[i+s-1][mid+s-1]-arr[i+s-1][mid-1]-arr[i-1][mid+s-1]+arr[i-1][mid-1];
					if(sum>=k*s*s)
					{
						high=mid-1;
						p=mid;
						flag=1;
					}
					else
					{
						low=mid+1;
					}
				}
					if(flag==1)
					{
						ans+=(m-s-p+2);
					}
				}
			}
			cout<<ans<<'\n';
		}
	return 0;
}
