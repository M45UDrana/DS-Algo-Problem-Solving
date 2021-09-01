#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll inf = 0;

int main()
{
    ll n; cin >> n;
    int a[n][2];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i][1];
        a[i][0] = 0;
        inf += a[i][1];
    }
    string s[n][2];
    for(int i = 0; i < n; i++)
    {
        cin >> s[i][0];
        s[i][1] = s[i][0];
        reverse(s[i][1].begin(),s[i][1].end());
    }
    ll dp[2] = {0,a[0][1]};
    for(int i = 1; i < n; i++)
    {
        ll tmp_dp[2] = {inf*3,inf*3};
        for(int j = 0; j < 2; j++)
        {
            if(s[i-1][0] <= s[i][j])
                tmp_dp[j] = min(tmp_dp[j],dp[0]+a[i][j]);
            if(s[i-1][1] <= s[i][j])
                tmp_dp[j] = min(tmp_dp[j],dp[1]+a[i][j]);
        }
        dp[0] = tmp_dp[0];
        dp[1] = tmp_dp[1];
    }
    ll ans = min(dp[0], dp[1]);
    if(ans > inf)
        cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}