#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
int main()
{
    ll n, r, a;
    cin >> n >> r >> a;
    vector<pair<ll,ll> > v(n);
    ll sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i].second >> v[i].first;
        sum += v[i].second;
    }
    if(sum >= a*n)
    {
        cout << 0 << endl;
        return 0;
    }
    sum = (a*n) - sum;
    sort(v.begin(), v.end());
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        ll pnt = r-v[i].second;
        pnt = min(pnt, sum);
        sum -= pnt;
        ans += pnt*v[i].first;
    }
    cout << ans << endl;
    return 0;
}