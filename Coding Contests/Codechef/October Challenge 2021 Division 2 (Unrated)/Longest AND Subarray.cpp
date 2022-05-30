#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int steps=0;
	    for(int i=1;i<31;i++)
	    {
	        if((1<<i)>n)
	        {
	            break;
	        }
	        steps++;
	    }
	    int k=(1<<steps);
	    int x=k/2;
	    int y=n-k+1;
	    cout<<((x>y) ? x : y)<<'\n';
	}
	return 0;
}

