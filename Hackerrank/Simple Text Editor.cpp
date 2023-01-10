#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    fast
    int t;
    cin>>t;
    string disp="";
    deque<string> q;
    q.push_front(disp);
    while(t--)
    {
        disp=q.front();
        int n;
        cin>>n;
        string op;
        int k;
        if(n==1)
        {
            cin>>op;
            disp+=op;
            q.push_front(disp);
            disp=q.front();
        }
        else if(n==2 || n==3)
        {
            cin>>k;
            if(n==3)
            {
                cout<<disp[k-1]<<'\n';
            }
            else if(n==2)
            {
                string temp="";
                int size=disp.length();
                for(int i=0;i<(size-k);i++)
                {
                    temp+=disp[i];
                }
                q.push_front(temp);
                disp=q.front();
            }
        }
        else
        {
            q.pop_front();
        }
    }
    return 0;
}

