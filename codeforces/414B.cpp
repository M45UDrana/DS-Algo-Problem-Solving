#include <bits/stdc++.h>

using namespace std;

const int md = 1e9+7;

int main()
{
    int n, k; cin >> n >> k;
    int dp[n+1];
    for(int i = 0; i <= n; i++)
        dp[i] = 1;
    for(int i = 1; i < k; i++)
    {
        int sub_dp[n+1];
        memset(sub_dp, 0, sizeof(sub_dp));
        for(int j = 1; j <= n; j++)
        {
            for(int x = 1; x*j <= n; x++)
                sub_dp[j] = (sub_dp[j] + dp[x*j])%md;
            dp[j] = sub_dp[j];
        }
    }
    int sum = 0;
    for(int i = 1; i <= n; i++)
        sum = (sum+dp[i])%md;
    cout << sum << endl;
    return 0;
}