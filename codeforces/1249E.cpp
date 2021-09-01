#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, c; cin >> n >> c;
	int a[n], b[n];
	for(int i = 1; i < n; i++)
		cin >> a[i];
	for(int i = 1; i < n; i++)
		cin >> b[i];

	int dp[2] {0, int(1e9)};
	cout << 0;
	for(int i = 1; i < n; i++)
	{
		int tmp_dp[2];
		tmp_dp[0] = min(dp[0], dp[1]) + a[i];
		tmp_dp[1] = min(dp[0]+c, dp[1]) + b[i];
		
		dp[0] = tmp_dp[0]; dp[1] = tmp_dp[1];
		cout << " " << min(dp[0], dp[1]);
	}
	cout << endl;
    return 0;
}