#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const ll md = 1e9+7;

int main()
{
    IO;
	int Cs = 1;
	cin >> Cs;
	for(int cs = 1; cs <= Cs; cs++)
    {
		ll n, k, ans = 1; cin >> n >> k;

		vector<ll> dp(n+2, 1);
		for(int k_ = k-1; k_ > 0; k_--)
		{
			vector<ll> tdp(n+2, 0);
			ll cnt = 0;
			for(int i = n; i > 0; i--)
			{
				tdp[i] = cnt;
				(cnt += dp[i]) %= md;
			}
			(ans += cnt) %= md;
			cnt = 0;
			for(int i = 1; i <= n; i++)
			{
				dp[i] = tdp[i];
				tdp[i] = 0;
			}

			k_--;
			if(!k_)
				break;

			for(int i = 1; i <= n; i++)
			{
				tdp[i] = cnt;
				(cnt += dp[i]) %= md;
			}
			(ans += cnt) %= md;
			for(int i = 1; i <= n; i++)
			{
				dp[i] = tdp[i];
				tdp[i] = 0;
			}
		}
		cout << ans << endl;
	}
	return 0;
}