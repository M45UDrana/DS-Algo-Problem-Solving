#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	ll t; cin >> t;
	while(t--)
	{
		ll n, m; cin >> n >> m;
		vector<pair<ll,ll> > v(m);
		for(int i = 0; i < m; i++)
		{
			ll x, y; cin >> x >> y;
			v[i] = make_pair(x,y);
		}
		sort(v.begin(), v.end());
		ll suf[m+1];
		suf[m] = 0;
		for(int i = m-1; i >= 0; i--)
		{
			suf[i] = suf[i+1] + v[i].first;
		}
		ll ans = 0;
		for(int i = 0; i < m; i++)
		{
			ll it = lower_bound(v.begin(),v.end(),
				make_pair(v[i].second,0LL)) - v.begin();

			it = max(it, m-n);
			ll hpy = suf[it];
			ll x = n - (m - it);
			if(x)
			{
				if(i < it)
				{
					hpy += v[i].first;
					x--;
				}
				hpy += x*v[i].second;
			}
			ans = max(hpy, ans);
		}
		cout << ans << endl;
	}
	return 0;
}