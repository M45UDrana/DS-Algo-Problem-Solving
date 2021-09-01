#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, b; cin >> n >> b;
    ll ans = (ll)1e18;
    for(ll i = 2; i <= b; i++)
    {
        if(i*i > b)
            i = b;
        ll x = 0, y = 0;
        while(b%i == 0)
        {
            x++;
            b /= i;
        }
        if(x == 0)
            continue;
        ll j = 1;
        while(j <= n/i)
        {
            j *= i;
            y += n/j;
        }
        ans = min(ans, (ll)y/x);
    }
    cout << ans << endl;
    return 0;
}