#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9+7;

int main()
{
    int c, d, n, m, k;
    cin >> c >> d >> n >> m >> k;
    vector<int>dp(n*m+n+m, oo);
    dp[0] = 0;
    for(int i = 0; i+max(n, m) < dp.size(); i++)
    {
        dp[i+n] = min(dp[i+n], dp[i]+c);
        dp[i+1] = min(dp[i+1], dp[i]+d);
    }
    int ans = oo;
    if(n*m < k )
    {
        cout << 0 << endl;
        return 0;
    }
    for(int i = (n*m)-k; i < dp.size(); i++)
        ans = min(ans, dp[i]);
    cout << ans << endl;
    return 0;
}