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
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		sort(a,a+n);
		int value=0;
		bool flag=false;
		for(int i=0;i<n;i++)
		{
			if(i+1-a[i]<0)
			{
				flag=true;
				break;
			}
			value+=+i+1-a[i];
		}
		if(flag)
		{
			cout<<"Second\n";
		}
		else if(value%2==1)
			{
				cout<<"First\n";
			}
	    else
			{
				cout<<"Second\n";
			}
		}
		return 0;
	}
