#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll md = 1e9+7;

ll cnt(ll m, ll x)
{
    ll c = m/3;
    ll c_m = c*3+1;
    if(c_m%3 == x and c_m <= m)
        c++;
    c_m++;
    if(c_m%3 == x and c_m <= m)
        c++;
    return c;
}
int main()
{
    ll n, l, r; 
    cin >> n >> l >> r;
    ll cnt0 = cnt(r, 0) - cnt(l-1, 0);
    ll cnt1 = cnt(r, 1) - cnt(l-1, 1);
    ll cnt2 = cnt(r, 2) - cnt(l-1, 2);
    ll dp[3] = {cnt0, cnt1, cnt2};
    for(int i = 2; i <= n; i++)
    {
        ll tmp_dp[3] = {0,0,0};
        (tmp_dp[0] = (dp[1]*cnt2)%md + (dp[2]*cnt1)%md 
            + (dp[0]*cnt0)%md) %= md;
        (tmp_dp[1] = (dp[1]*cnt0)%md + (dp[2]*cnt2)%md 
            + (dp[0]*cnt1)%md) %= md;
        (tmp_dp[2] = (dp[1]*cnt1)%md + (dp[2]*cnt0)%md 
            + (dp[0]*cnt2)%md) %= md;
        dp[0] = tmp_dp[0];
        dp[1] = tmp_dp[1];
        dp[2] = tmp_dp[2];
    }
    cout << dp[0] << endl;
    return 0;
}