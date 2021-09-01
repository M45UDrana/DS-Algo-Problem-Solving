#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const ll inf = 1e9+7;

int main()
{
	int n; cin >> n;
	int dp[n+5], cnt = 0, ans = 0;
	memset(dp, 0, sizeof(dp));
	dp[0] = 1;
	for(int i = 0; i < n; i++)
	{
		char c; cin >> c;
		if(c == 's')
		{
			ans = 0;
			int tmp_dp[n+5];
			memset(tmp_dp, 0, sizeof(tmp_dp));
			for(int j = 0; dp[j]; j++)
			{
				ans += dp[j];
				for(int l = 1; l <= cnt; l++)
					tmp_dp[j+l] += dp[j];
			}

			for(int j = 1; tmp_dp[j]; j++)
				dp[j] += tmp_dp[j];
		}
		else cnt++;
	}
	cout << ans << endl;
	return 0;
}