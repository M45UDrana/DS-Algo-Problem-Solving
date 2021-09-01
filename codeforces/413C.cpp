#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m; cin >> n >> m;
    ll a[n+1];
    for(ll i = 1; i <= n; i++)
        cin >> a[i];
    ll aut[101];
    memset(aut, 0, sizeof(aut));
    for(ll i = 0, x; i < m; i++)
    {
        cin >> x;
        aut[x]++;
    }
    ll ans = 0;
    vector<ll> pnt;
    for(ll i = 1; i <= n; i++)
    {
        if(aut[i])
            pnt.push_back(a[i]);
        else ans += a[i];
    }
    sort(pnt.begin(), pnt.end());
    ll i = 0, j = pnt.size()-1;
    while(i <= j)
    {
        if(ans > pnt[i] and ans > pnt[j])
        {
            ans *= 2;
            i++;
        }
        else ans += pnt[j--];
    }
    cout << ans << endl;
    return 0;
}