#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p,k;
	    cin>>n>>p>>k;
	    int range=(n-1)/k;
	    int remain=p%k;
	    int rafterdiv=n-1-(range*k);
	    int ans=range*remain;
	    if(remain>rafterdiv)
	    {
	        ans+=(rafterdiv+1);
	    }
	    else
	    {
	        ans+=remain;
	    }
	    for(int i=remain;i<=n-1;i+=k)
	    {
	        ans++;
	        if(i==p)
	        {
	            cout<<ans;
	            break;
	        }
	    }
	    cout<<'\n';
	}
	return 0;
}
