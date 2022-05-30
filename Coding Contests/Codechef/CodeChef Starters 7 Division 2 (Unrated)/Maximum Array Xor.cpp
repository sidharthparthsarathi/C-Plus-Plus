#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    long long n,k;
	    cin>>n>>k;
	    long long p=((long long)1<<n);
	    long long maxm=p-1;
	    if(2*k<=p)
	    {
	    cout<<(((long long)(maxm)*(2*k)))<<'\n';
	    }
	    else
	    {
	        cout<<(maxm)*(p)<<'\n';
	    }
	}
	return 0;
}

