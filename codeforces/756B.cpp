#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> a(n+1);
    a[0] = 0;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    vector<int> dp(n+1);
    dp[0] = 0;
    for(int i = 1,in; i <= n; i++)
    {
        in = lower_bound(a.begin()+1,a.end(),a[i]-89)-a.begin();
        int x = 50 - (dp[i-1] - dp[in-1]);

        in = lower_bound(a.begin()+1,a.end(),a[i]-1439)-a.begin();
        int y = 120 - (dp[i-1] - dp[in-1]);

        dp[i] = dp[i-1] + min(20, min(x,y));
        cout << dp[i] - dp[i-1] << endl;
    }
    return 0;
}