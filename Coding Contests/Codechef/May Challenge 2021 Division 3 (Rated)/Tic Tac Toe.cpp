#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
    fast
	int t;
	cin>>t;
	while(t--)
	{
		string* arr=new string[3];
		int nox=0,noo=0,no_=0;
		for(int i=0;i<3;i++)
		{
			cin>>arr[i];
			for(int j=0;j<3;j++)
			{
				if(arr[i][j]=='_')
				{
					no_++;
				}
				else if(arr[i][j]=='O')
				{
					noo++;
				}
				else if(arr[i][j]=='X')
				{
					nox++;
				}
			}
		}
		bool xwins=false;
		bool owins=false;
		int x=0;
		int o=0;
		for(int i=0;i<3;i++)
		{
			if(arr[i][0]=='X' && arr[i][1]=='X' && arr[i][2]=='X')
			{
				xwins=true;
				x++;
			}
			else if(arr[i][0]=='O' && arr[i][1]=='O' && arr[i][2]=='O')
			{
				owins=true;
				o++;
			}
		}
		for(int j=0;j<3;j++)
		{
			if(arr[0][j]=='X' && arr[1][j]=='X' && arr[2][j]=='X')
			{
				xwins=true;
				x++;
			}
			else if(arr[0][j]=='O' && arr[1][j]=='O' && arr[2][j]=='O')
			{
				owins=true;
				o++;
			}
		}
		if(arr[1][1]=='X')
		{
			if(arr[0][0]=='X' && arr[2][2]=='X')
			{
				xwins=true;
				x++;
			}
			if(arr[0][2]=='X' && arr[2][0]=='X')
			{
				xwins=true;
				x++;
			}
		}
		else if(arr[1][1]=='O')
		{
				if(arr[0][0]=='O' && arr[2][2]=='O')
			{
				owins=true;
				o++;
			}
			if(arr[0][2]=='O' && arr[2][0]=='O')
			{
				owins=true;
				o++;
			}
		}
		if(nox==noo)
		{
			if((xwins && owins))
			{
				cout<<3;
			}
			else if((xwins && x>=1) || (owins && o>1))
			{
				cout<<3;
			}
			else if(owins || (!xwins && !owins && no_==0))
			{
				cout<<1;
			}
			else if(!xwins && !owins && no_>0)
			{
				cout<<2;
			}
			else
			{
				cout<<3;
			}
		}
		else if(nox==noo+1)
		{
			if((xwins && owins))
			{
				cout<<3;
			}
			else if((xwins && x>2) || (owins && o>=1))
			{
				cout<<3;
			}
			else if((xwins) || (!xwins && !owins && no_==0))
			{
				cout<<1;
			}
			else if(!xwins && !owins && no_>0)
			{
				cout<<2;
			}
			else
			{
				cout<<3;
			}
		}
		else
		{
			cout<<3;
		}
		cout<<'\n';
	}
	return 0;
}
