#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll n, m, k;

bool srch(ll ans)
{
    ll x = ans-1;
    ll l = x - (k-1), r = x - (n-k);
    ans += ((x*x+x)/2) * 2;
    if(l > 0)
        ans -= (l*l+l)/2;
    else ans += abs(l);
    if(r > 0)
        ans -=(r*r+r)/2;
    else ans += abs(r);
    if(ans <= m)
        return true;
    return false;
}
int main()
{
    cin >> n >> m >> k;
    ll left = 1, right = m;
    while(left < right)
    {
        ll mid = (right+left+1)/2;
        if(srch(mid))
            left = mid;
        else right = mid-1;
    }
    cout << left << endl;
    return 0;
}