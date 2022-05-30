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
		int c;
		cin>>c;
		int i=0;
		while((1<<i)<=c)
		{
			i++;
		}
		int p=((1<<i)/2)-1;
		int end=(1<<i);
		int num=(end-c)+p;
		string arr1=to_string(p);
		string arr2=to_string(num);
		reverse(arr1.begin(), arr1.end());
        reverse(arr2.begin(), arr2.end());
        int ans_size = arr1.size() + arr2.size();
        int ans[ans_size]={0};
        for(int i=0; i<arr1.size();i++)
{
    for(int j=0; j<arr2.size();j++)
    {
        //Convert array elements (char -> int)
        int p = (int)(arr1[i]) - '0';
        int q = (int)(arr2[j]) - '0';

        //Excerpt from Shravan's answer above
        ans[i+j]+=p*q;
        ans[i+j+1]=ans[i+j+1]+ans[i+j]/10;
        ans[i+j]%=10;
    }
}
string s="";

for(auto i=0;i<ans_size; ++i)
    s += to_string(ans[i]); 

reverse(s.begin(), s.end() );

//If last element is 0, it should be skipped
if(s[0] =='0')
{
   string ss(s,1,s.size()-1);
   s=ss;
}

//Final answer
cout<< s;
cout<<'\n';
	}
	return 0;
}
