#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll inf = 3e18;
const ll N = 1e5+7;
ll a[N];

int main()
{
    ll n, p, q, r; 
    cin >> n >> p >> q >> r;
    for(int i = 0; i < n; i++)
        cin >> a[i];
    ll dp[n][3];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < 3; j++)
            dp[i][j] = -inf;
    dp[0][0] = a[0]*p;
    dp[0][1] = dp[0][0] + a[0]*q;
    dp[0][2] = dp[0][1] + a[0]*r;
    for(int i = 1; i < n; i++)
    {
        dp[i][0] = max(dp[i-1][0], a[i]*p);
        dp[i][1] = max(dp[i-1][1], dp[i][0] + a[i]*q);
        dp[i][2] = max(dp[i-1][2], dp[i][1] + a[i]*r);
    }
    cout << dp[n-1][2] << endl;
    return 0;
}