#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		ll x, def, mx; cin >> x;
		pair<ll,ll> p;

		for(int i = 0; i < n; i++)
		{
			ll d, h; cin >> d >> h;
			if(i)
			{
				if(d-h > def)
				{
					def = d-h;
					p = {d, h};
				}
				mx = max(d, mx);
			}
			else
			{
					def = d-h;
					p = {d, h};
					mx = d;
			}
		}
		if(def <= 0)
		{
			if(x <= mx)
				cout << 1 << endl;
			else
				cout << -1 << endl;
			continue;
		}
		ll ans = 1;
		x = max(x-mx, 0ll);
		ans += (x+def-1)/def;
		cout << ans << endl;
	}
    return 0;
}