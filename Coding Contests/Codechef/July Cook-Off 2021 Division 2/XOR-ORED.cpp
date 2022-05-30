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
		ull n;
		cin>>n;
		ull maxm=32;//Beacuse maximum int value
		ull* arr=new ull[n];
		ull* newArr=new ull[n];
		ull totalHalf=ceil((double)n/2);
		ull value=1;
		ull minResult=0;
		for(ull i=0;i<n;i++)
		{
			cin>>arr[i];
			newArr[i]=arr[i];
		}
		ull Bits[maxm];
		for(ull i=0;i<maxm;i++)
		{
			Bits[i]=0;
			for(ull j=0;j<n;j++)
			{
				if(arr[j]&1)
				{
					Bits[i]++;
				}
				arr[j]=arr[j]/2;
			}
		}
		for(ull i=0;i<maxm;i++)
		{
			if(Bits[i]>=totalHalf)
			{
				minResult+=value;
			}
			value*=2;
		}
		ull ans=0;
		for(ull i=0;i<n;i++)
		{
			ans=ans | (newArr[i]^minResult);
		}
		cout<<minResult<<' '<<ans;
		delete [] arr;
		delete [] newArr;
		cout<<'\n';
	}
	return 0;
}
