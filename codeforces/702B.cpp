#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n; cin >> n;
    vector<ll> v(n);
    map<ll, ll> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(v.begin(), v.end());

    vector<ll> pof2;
    for(ll i = 1; i < (ll)1e10; i *= 2)
        pof2.push_back(i);
    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        mp[v[i]]--;
        for(int j = 0; j < pof2.size(); j++)
            ans += mp[pof2[j]-v[i]];
    }
    cout << ans << endl;
    return 0;
}