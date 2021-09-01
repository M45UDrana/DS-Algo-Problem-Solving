#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    s = " " + s;
    int n = s.size(); 

    int dp[n][3];
    memset(dp, 0, sizeof(dp));

    for(int i = 1; i < n; i++)
    {
        dp[i][0] = dp[i-1][0] + (s[i] == 'a');
        dp[i][1] = max(dp[i-1][0], dp[i-1][1]) +
            (s[i] == 'b');
        dp[i][2] = max(dp[i][1], dp[i-1][2]) + 
            (s[i] == 'a');
    }
    cout << dp[n-1][2] << endl;
    return 0;
}