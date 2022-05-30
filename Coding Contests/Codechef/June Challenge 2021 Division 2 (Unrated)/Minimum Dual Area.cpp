#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pii pair<ll,ll>
#define pb push_back
#define bg begin()
#define rbg rbegin()
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
int main()
{
    fast
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        multiset<ll> A;//For Storing X Co-ordinate
        multiset<ll> B;//For Storing Y Co-ordinate
        vector<pii> xc;
        vector<pii> yc;
        for (ll i=0;i<n;i++)
        {
            pii p;
            cin>>p.first>>p.second;
            pii rev;
            rev.first=p.second;
            rev.second=p.first;
            xc.pb(p);
            yc.pb(rev);
            A.insert(p.first);
            B.insert(p.second);
        }
        sort(xc.begin(),xc.end());//Sorting w.r.t x Co-ordinate
        sort(yc.begin(),yc.end());//Sorting w.r.t y Co-ordinate
        ll minArea=LLONG_MAX;
        ll h1=0,h2=0,w1=0,w2=0;
        ll h1max=0;
        ll h1min=LLONG_MAX;
        ll w1max=0;
        ll w1min=LLONG_MAX;
        //For Height
        for (ll i=0;i<n-1;i++)
        {

            h1max = max(h1max,xc[i].second);
            h1min = min(h1min,xc[i].second);
            h1 = h1max-h1min;
            auto it=B.find(xc[i].second);
            B.erase(it);
            h2=*B.rbg-*B.bg;
            ll newArea=((xc[i].first-xc[0].first)*h1)+((xc[n-1].first-xc[i + 1].first)*h2);
            minArea=min(minArea,newArea);
        }
        //For Weight
        for (ll i=0;i<n-1;i++)
        {
            w1max=max(w1max,yc[i].second);
            w1min=min(w1min,yc[i].second);
            w1=w1max-w1min;
            auto it=A.find(yc[i].second);
            A.erase(it);
            w2=*A.rbg-*A.bg;
            ll newArea=((yc[i].first-yc[0].first)*w1)+((yc[n-1].first-yc[i+1].first)*w2);
            minArea=min(minArea,newArea);
        }
        cout<<((minArea==LLONG_MAX) ? 0 : minArea)<<'\n';
    }
  return 0;
}
