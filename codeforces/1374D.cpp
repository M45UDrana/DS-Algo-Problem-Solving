#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		map<ll,ll> mp;
		ll n, k; cin >> n >> k;
		for(int i = 0; i < n; i++)
		{
			ll x; cin >> x;
			mp[x%k]++;
		}

		ll ans = 0;
		for(auto &x : mp)
		{
			if(x.first != 0)
				ans = max(ans, (x.second*k)+1-x.first);
		}
		cout << ans << endl;
	}


    return 0;
}