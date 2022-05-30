#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define double long double
#define pii pair<ll, ll>
#define ins emplace_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0);
ll md = 1000000000+7;
const ll maxm = 300000+5;
vector<ll> adjcnt[maxm],arr,val_list;
vector<pii> ch;

void definsn(ll nmr, ll list=-1) {
    for (auto x : adjcnt[nmr]) {
        if (x == list)
		{
			continue;
		}
        definsn(x, nmr);
    }

    ch.clear();
    for (auto x : adjcnt[nmr])
	{
        if (x != list) ch.ins(arr[x], x);
    }
    sort(ch.rbegin(),ch.rend());

    ll token = 1;
    for (auto [_val_list, i] : ch)
	{
	val_list[i] = token++;
    }
    for (auto x : adjcnt[nmr])
	{
        if (x != list)
        {
		arr[nmr]=arr[nmr]+(val_list[x] * arr[x]);
	    }
    }
}
int main() {
    fast
    int t;
	cin >> t;
    while(t--)
	{
    ll n,x;
	cin>>n>>x;
    arr.assign(n,1),val_list.assign(n, 0);
    for (ll i=0;i<n;i++)
	{ 
	vector<ll>().swap(adjcnt[i]);
    }
    for (ll i=0;i<n-1;i++) {
        ll u,v;
		cin>>u>>v;
		u--,v--;
        adjcnt[u].ins(v),adjcnt[v].ins(u);
    }
    definsn(0);
    cout<<(arr[0]%md*x)%md;
    cout<<'\n';
    }
    return 0;
}
