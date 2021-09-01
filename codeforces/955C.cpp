#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const ll inf = ll(1e18);
const ll N = 1e6 + 100;

vector<ll> v;

ll root(ll x)
{
	ll sq = sqrt(x);
	while((sq+1)*(sq+1) <= x)
		sq++;
	while(sq*sq > x)
		sq--;
	return sq;
}

void init()
{
	for(ll i = 2; i <= N; i++)
	{
		ll x = i*i;
		while(inf/x >= i)
		{
			x *= i;
			ll sq = root(x);
			if(sq*sq == x)
				continue;
			v.pb(x);
		}
	}
	sort(v.begin(),v.end());
	v.resize(unique(v.begin(),v.end()) - v.begin());
}

int main()
{
    IO;
	init();
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		ll l, r; cin >> l >> r;
		ll ans = root(r) - root(l-1);
		ans += upper_bound(v.begin(), v.end(),r)
			- upper_bound(v.begin(), v.end(), l-1);
		cout << ans << endl;
	}
	return 0;
}