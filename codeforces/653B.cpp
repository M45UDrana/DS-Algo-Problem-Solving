#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q; cin >> n >> q;
    vector<int> mp[6];
    for(int i = 0; i < q; i++)
    {
        string s; cin >> s;
        char c; cin >> c;
        mp[c-'a'].push_back(s[0]-'a');
    }
    int dp[6];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    while(n-- > 1)
    {
        int tmp[6];
        memset(tmp, 0, sizeof(tmp));
        for(int i = 0; i < 6; i++)
        {
            if(dp[i])
            {
                for(int j = 0; j < mp[i].size(); j++)
                {
                    tmp[mp[i][j]] += dp[i];
                }
            }
        }
        for(int i = 0; i < 6; i++)
            dp[i] = tmp[i];
    }
    int ans = 0;
    for(int i = 0; i < 6; i++)
        ans += dp[i];
    cout << ans << endl;
    return 0;
}