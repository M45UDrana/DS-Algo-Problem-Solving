#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m; cin >> n >> m;
    int a[m][n], pos[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j]; a[i][j]--;
            pos[i][a[i][j]] = j;
        }
    }
    int dp[n], ans = 1;
    memset(dp, 0, sizeof(dp));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            bool ok = true;
            for(int k = 0; k < m; k++)
            {
                if(pos[k][j] >= pos[k][a[0][i]])
                    ok = false;
            }
            if(ok)
                dp[a[0][i]] = max(dp[a[0][i]], dp[j]+1);
        }
        ans = max(ans, dp[a[0][i]]+1);
    }
    cout << ans << endl;
    return 0;
}