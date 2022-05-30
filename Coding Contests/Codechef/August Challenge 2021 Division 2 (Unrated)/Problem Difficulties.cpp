#include <iostream>
#include<unordered_set>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int arr[11]={0};
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    arr[a]++,arr[b]++,arr[c]++,arr[d]++;
	    int count=0;
	    int pairs=0;
	    for(int i=1;i<=10;i++)
	    {
	        if(arr[i]>0)
	        {
	            count++;
	        }
	        pairs+=arr[i]/2;
	    }
	    if(pairs==0 || (pairs==1 && count==3) || (pairs==2 && count==2))
	    {
	        cout<<2;
	    }
	    else if((pairs==1 && count==2))
	    {
	        cout<<1;
	    }
	    else if(count==1)
	    {
	        cout<<0;
	    }
	    cout<<'\n';
	}
	return 0;
}

