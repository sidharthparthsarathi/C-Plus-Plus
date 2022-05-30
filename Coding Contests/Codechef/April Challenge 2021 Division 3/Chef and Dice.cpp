#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		long long num,totalsum=0;
		cin>>num;
		totalsum=(num/4)*44;
		int left=(num%4);
		if(num>=4)
		{
		  if(left==0)
		  {
		  	totalsum+=16;
		  }	
		  if(left==1)
		  {
		  	totalsum+=32;
		  }
		  if(left==2)
		  {
		  	totalsum+=44;
		  }
		  if(left==3)
		  {
		  	totalsum+=55;
		  }
		  cout<<totalsum<<'\n';
		}
		else
		{
			int els=0;
			if(left==1)
			{
				els=20;
			}
			if(left==2)
			{
				els=36;
			}
			if(left==3)
			{
				els=51;
			}
			cout<<els<<'\n';
		}		
	}
	return 0;
}
