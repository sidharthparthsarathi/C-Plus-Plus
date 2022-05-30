#include<bits/stdc++.h>
using namespace std;
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0);
#define modulus 1000000007;
typedef unsigned long long ull;
int main()
{
	fastIO()
	int t;
	cin>>t;
	while(t--)
	{
		int num,m;
		cin>>num>>m;
		vector<ull> arr(num+1,1);
		ull ansr=0;//For Safety
		for(int i=2;i<=num;i++)
		{
			ull s=(ull)m%i;
			ansr=ansr+arr[s];
			for(int l=s;l<=num;l+=i)
			{
				arr[l]++;
			}
		}
		cout<<ansr<<'\n';
	}
	return 0;
}
