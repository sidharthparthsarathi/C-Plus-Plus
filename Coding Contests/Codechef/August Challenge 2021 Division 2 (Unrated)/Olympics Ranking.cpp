#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,e,f;
	    cin>>a>>b>>c>>d>>e>>f;
	    if((a+b+c)<(d+e+f))
	    {
	        cout<<2;
	    }
	    else
	    {
	        cout<<1;
	    }
	    cout<<'\n';
	}
	return 0;
}

