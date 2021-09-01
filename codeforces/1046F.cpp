#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n; cin >> n;
    ll a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    ll x, f; cin >> x >> f;
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        ans += a[i]/(x+f);
        a[i] %= (x+f);
        ans += (a[i] > x);
    }
    cout << ans*f << endl;
    return 0;
}