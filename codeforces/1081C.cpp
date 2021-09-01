#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

const int md = 998244353;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<ll> > dp(n+1, 
            vector<ll>(k+1, 0));
    dp[1][0] = m;
    for(int i = 2; i <= n; i++)
    {
        for(int j = 0; j <= k; j++)
        {
            if(j)
                (dp[i][j] = dp[i-1][j] + 
                 (dp[i-1][j-1]*m-dp[i-1][j-1])) %= md;
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout << dp[n][k] << endl;
    return 0;
}