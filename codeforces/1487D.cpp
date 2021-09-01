#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

ll search(ll a)
{
	ll l = a, r = a*a/2;
	while(l <= r)
	{
		ll md = (l+r)/2;
		ll c = a*a-md;
		if(a*a+md*md == c*c)
			return c;
		else if(a*a+md*md < c*c)
			l = md+1;
		else r = md-1;
	}
	return -1;
}

int main()
{
    IO;
	map<ll,ll> M;
	for(ll i = 3; i*i <= ll(1e9); i++)
	{
		ll c = search(i);
		if(c != -1)
			M[c]++;
	}
	ll sum = 0;
	vector<pair<ll,ll> > v;
	v.pb(mp(0,0));
	for(auto &x:M)
	{
		M[x.ff] += sum;
		sum = M[x.ff];
		v.pb(mp(x.ff,x.ss));
	}
	int m = v.size();
	int Case = 1;
	cin >> Case;
    while(Case--)
    {
		ll n; cin >> n;
		ll l = 0, r = m-1;
		while(l < r)
		{
			ll md = (l+r+1)/2;
			if(v[md].ff <= n)
				l = md;
			else r = md-1;
		}
		cout << v[l].ss << endl;
	}
	return 0;
}