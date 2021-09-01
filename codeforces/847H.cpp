#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n; cin >> n;
    ll a[n], lft[n], rht[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    ll mx = 0;
    for(int i = 0; i < n; i++)
    {
        mx = max(a[i], mx+1);
        lft[i] = mx - a[i];
        if(i)
            lft[i] += lft[i-1];
    }
    mx = 0;
    for(int i = n-1; i >= 0; i--)
    {
        mx = max(a[i], mx+1);
        rht[i] = mx - a[i];
        if(i+1 < n)
            rht[i] += rht[i+1];
    }
    ll ans = (ll) 1e15;
    for(int i = 0; i < n; i++)
    {
        ll cur = 0, l = lft[i], r = rht[i];
        if(i)
        {
            cur += lft[i-1];
            l -= lft[i-1];
        }
        if(i+1 < n)
        {
            cur += rht[i+1];
            r -= rht[i+1];
        }
        cur += max(l,r);
        ans = min(ans, cur);
    }
    cout << ans << endl;
    return 0;
}