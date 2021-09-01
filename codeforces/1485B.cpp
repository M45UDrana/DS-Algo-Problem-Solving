#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);


int main()
{
    IO;
	ll n, q, k; cin >> n >> q >> k;
	vector<ll> v(n+1), dp(n+1);
	v[0] = 0; dp[0] = 0;
	for(int i = 1; i <= n; i++)
		cin >> v[i];
	v.push_back(k+1);

	for(int i = 1; i <= n; i++)
	{
		dp[i] = (v[i]-v[i-1])+(v[i+1]-v[i])-2 + dp[i-1];
	}
	while(q--)
	{
		ll l, r; cin >> l >> r;
		ll ans = dp[r]-dp[l-1];
		ans += (k-v[r]) - (v[r+1]-v[r]-1);
		ans += (v[l]-1) - (v[l]-v[l-1]-1);
		cout << ans << endl;
	}
	return 0;
}