#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    ll pre[n], suf[n];
    pre[0] = 0; suf[n-1] = 0;
    for(int i = 1; i < n; i++)
        pre[i] = ((a[i] - a[i-1]) * i) + pre[i-1];
    for(int i = n-2, j = 1; i >= 0; i--, j++)
        suf[i] = ((a[i+1] - a[i]) * j) + suf[i+1];

    ll dis = (ll)1e18, ans;
    for(int i = 0; i < n; i++)
    {
        if(dis > pre[i] + suf[i])
        {
            dis = pre[i] + suf[i];
            ans = a[i];
        }
    }
    cout << ans << endl;
    return 0;
}