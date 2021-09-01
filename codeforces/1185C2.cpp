#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n, m; cin >> n >> m;
    ll cnt[101];
    memset(cnt, 0, sizeof(cnt));
    for(int i = 1; i <= n; i++)
    {
        ll x; cin >> x;
        ll k = m-x, c = 0;
        for(int j = 1; j <= 100; j++)
        {
            c += min(cnt[j], (ll)k/j);
            k -= min(cnt[j], (ll)k/j)*j;
        }
        cout << i-c-1 <<" \n"[i==n];
        cnt[x]++;
    }
    return 0;
}