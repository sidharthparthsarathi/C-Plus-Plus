#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int* arr=new int[n];
		int* left=new int[n];
		int* right=new int[n];
		int trackerLeft=0;
		int trackerRight=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]==0)
			{
				left[i]=-1;
				right[i]=-1;
			}
			else
			{
				left[i]=0;
				right[i]=0;
			}
		}
		left[0]=0;
		right[0]=0;
		if(arr[0]==1)
		{
			trackerRight=1;
		}
		for(int i=1;i<n;i++)
		{
			if(arr[i]==0 && trackerRight)
			{
				right[i]=(i+1)-trackerRight;
			}
			if(arr[i]==1)
			{
				trackerRight=i+1;
			}
			
		}
		if(arr[n-1]==2)
		{
			trackerLeft=n;
		}
		for(int i=n-1;i>=1;i--)
		{
			if(arr[i]==0 && trackerLeft)
			{
				left[i]=trackerLeft-(i+1);
			}
			if(arr[i]==2)
			{
				trackerLeft=i+1;
			}
		}
		while(m--)
		{
			int l;
			cin>>l;
			if(left[l-1]==-1 && right[l-1]==-1)
			{
				cout<<-1<<' ';
			}
			else if(left[l-1]>-1 && right[l-1]>-1)
			{
				cout<<(min(left[l-1],right[l-1]))<<' ';
			}
			else
			{
				if(left[l-1]==-1)
				{
					cout<<right[l-1]<<' ';
				}
				else
				{
					cout<<left[l-1]<<' ';
				}
				
			}
		}
		delete [] arr;
		delete [] left;
		delete [] right;
		cout<<'\n';
	}
	return 0;
}
