#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int e,k;
	    cin>>e>>k;
	    int count=1;
	    while((e/k)!=0)
	    {
	        e=e/k;
	        count++;
	    }
	    cout<<count<<'\n';
	}
	return 0;
}

