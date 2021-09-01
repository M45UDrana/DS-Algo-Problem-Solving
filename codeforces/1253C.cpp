#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int N = 1e6+2;

int main()
{
    ll n, k; cin >> n >> k;
    ll a[n+1], dp[n+1], pre[n+1];
    dp[0] = 0; pre[0] = 0; a[0] = 0;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a, a+n+1);
    for(int i = 1, x; i <= n; i++)
    {
        pre[i] = a[i];
        pre[i] += pre[i-1];
    }
    for(int i = 1; i <= n; i++)
    {
        dp[i] = pre[i];
        if(i >= k)
            dp[i] += dp[i-k];
    }
    for(int i = 1; i <= n; i++)
        cout << dp[i] << " ";
    cout << endl;
    return 0;
}