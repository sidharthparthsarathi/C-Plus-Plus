#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    int c=a+b;
	    if(c<3)
	    {
	        cout<<1;
	    }
	    else if(c>=3 && c<=10)
	    {
	        cout<<2;
	    }
	    else if(c>=11 && c<=60)
	    {
	        cout<<3;
	    }
	    else
	    {
	        cout<<4;
	    }
	    cout<<'\n';
	}
	return 0;
}

