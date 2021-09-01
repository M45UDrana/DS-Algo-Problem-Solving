#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n; cin >> n;
    string s; cin >> s; s = " " + s;
    int pre[26][n+1], dp[26][n+1];
    for(int i = 0; i < 26; i++)
    {
        for(int j = 0; j <= n; j++)
        {
            if(j)
            {
                pre[i][j] = pre[i][j-1] + (s[j]-'a' == i);
            }
            else pre[i][j] = 0;
            dp[i][j] = j;
        }
    }

    for(int l = 1; l <= n; l++)
    {
        for(int r = l; r <= n; r++)
        {
            for(int i = 0; i < 26; i++)
            {
                int x = (r+1-l) - (pre[i][r] - pre[i][l-1]);
                dp[i][x] = max(dp[i][x], r+1-l);
            }
        }
    }

    for(int i = 0; i < 26; i++)
    {
        for(int j = 0, x = 0; j <= n; j++)
        {
            x = max(dp[i][j], x);
            dp[i][j] = max(dp[i][j], x);
        }
    }

    int m; cin >> m;
    for(int i = 0; i < m; i++)
    {
        int x; char c;
        cin >> x >> c;
        cout << dp[c-'a'][x] << '\n';
    }
    return 0;
}