#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int a[n], suf[n];
    memset(suf, 0, sizeof(suf));
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = n-1; i >= 0; i--)
    {
        if(i == n-1)
            suf[i] = a[i];
        else suf[i] += a[i] + suf[i+1];
    }
    int dp[n][2];
    memset(dp, 0, sizeof(dp));
    dp[n-1][0] = a[n-1];
    for(int i = n-2; i >= 0; i--)
    {
        dp[i][0] = max(a[i]+dp[i+1][1], dp[i+1][0]);
        dp[i][1] = suf[i] - dp[i][0];
    }

    cout << dp[0][1] << " " << dp[0][0] << endl;
    return 0;
}