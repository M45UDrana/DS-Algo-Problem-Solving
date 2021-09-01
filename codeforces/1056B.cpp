#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ll n, m; cin >> n >> m;
	ll a[m];
	memset(a, 0, sizeof(a));
	ll x = n/m;
	n -= x*m;
	for(ll i = 1; i <= m; i++)
	{
		ll idx = (i*i)%m;
		a[idx] += x;
		if(i <= n)
			a[idx]++;
	}
	ll ans = 0;
	for(int i = 1; i < m; i++)
	{
		if(m-i >= i)
		{
			ll y = (a[i]*a[m-i]);
			if(m-i != i)
				y *= 2;
			ans += y;
		}
	}
	ans += a[0]*a[0];
	cout << ans << endl;
	return 0;
}