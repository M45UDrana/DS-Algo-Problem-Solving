#include <bits/stdc++.h>

using namespace std;
#define int long long

signed main()
{
	int n, m, k; cin >> n >> m >> k;
	int a[n+1], pre[n+1];
	for(int i = 1, l = 1; i <= n; i++)
	{
		cin >> a[i];
		pre[i] = a[i];
		if(i>1)
			pre[i] += pre[i-1];
		if(i+1-l > m)
		{
			pre[i] -= a[l];
			l++;
		}
	}


	int dp[n+1][k+1];
	memset(dp, 0, sizeof(dp));

	for(int i = m; i <= n; i++)
	{
		for(int j = 1; j <= k; j++)
		{
			dp[i][j] = max(dp[i-1][j], dp[i-m][j-1]+pre[i]);
		}
	}
	int ans = 0;
	for(int i = m; i <= n; i++)
		ans = max(ans, dp[i][k]);
	cout << ans << endl;


    return 0;
}