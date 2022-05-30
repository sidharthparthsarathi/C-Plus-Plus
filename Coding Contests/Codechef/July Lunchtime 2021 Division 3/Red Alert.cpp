#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
#define ll int64_t
#define ull uint64_t
#define mod 1000000007
int main()
{
	fast
	int t;
	cin>>t;
	while(t--)
	{
		int n,d,h;
		cin>>n>>d>>h;
		bool flag=false;
		int* arr=new int[n];
		int* arrCopy=new int[n];
		int total=0;
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i]>0)
			{
				total+=arr[i];
			}
			else if(arr[i]==0)
			{
				if(total<d)
				{
					total=0;
				}
				else
				{
					total-=d;
				}
			}
			arrCopy[i]=total;
		}
		for(int i=0;i<n;i++)
		{
			if(arrCopy[i]>h)
			{
				cout<<"YES";
				flag=true;
				break;
			}
		}
		if(!flag)
		{
			cout<<"NO";
		}
		delete [] arr;
		delete [] arrCopy;
		cout<<'\n';
	}
	return 0;
}
