#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const ll md = 1e9+7;

int pwr[100001];

int main()
{
	for(int i = 0; i <= 100000; i++)
	{
		if(!i)
			pwr[i] = 1;
		else pwr[i] = (pwr[i-1]*2)%md;
	}
	for(int i = 0; i <= 100000; i++)
		(pwr[i] += pwr[i-1])%=md;

	ll n, q; cin >> n >> q;
	ll dp[n+1];
	dp[0] = 0;
	for(int i = 1; i <= n; i++)
	{
		char c; cin >> c;
		if(c == '1')
			dp[i] = 1;
		else dp[i] = 0;
		dp[i] += dp[i-1];
	}

	while(q--)
	{
		int l, r; cin >> l >> r;
		ll cnt1 = dp[r]-dp[l-1];
		ll cnt0 = (r-l+1) - cnt1;
		if(!cnt1)
		{
			cout << 0 << endl;
			continue;
		}
		ll ans = pwr[r-l];
		if(cnt0)
			ans -= pwr[cnt0-1];
		if(ans < 0)
			(ans += md) %= md;
		cout << ans << endl;
	}
	return 0;
}