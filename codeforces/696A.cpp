#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll INF = 1e18;

int main()
{
    map<pair<ll,ll>, ll>mp;
    int n; cin >> n;
    ll q, u, v, w;
    for(int i = 0; i < n; i++)
    {
        cin >> q;
        if(q%2)
        {
            cin >> u >> v >> w;
            vector<ll> a, b;
            while(u >= 1)
            {
                a.push_back(u);
                u /= 2;
            }
            while(v >= 1)
            {
                b.push_back(v);
                v /= 2;
            }
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            int j = 0;
            while(j < a.size() and j < b.size()
                    and a[j] == b[j])
                j++;
            for(int l = j; l < a.size() and l; l++)
                mp[{a[l-1], a[l]}] += w;
            for(int l = j; l < b.size() and l; l++)
                mp[{b[l-1], b[l]}] += w;
        }
        else 
        {
            cin >> u >> v;
            vector<ll>a, b;
            while(u >= 1)
            {
                a.push_back(u);
                u /= 2;
            }
            while(v >= 1)
            {
                b.push_back(v);
                v /= 2;
            }
            reverse(a.begin(), a.end());
            reverse(b.begin(), b.end());
            int j = 0;
            while(j < a.size() and j < b.size()
                    and a[j] == b[j])
                j++;
            ll ans = 0;
            for(int l = j; l < a.size() and l; l++)
                ans += mp[{a[l-1],a[l]}];
            for(int l = j; l < b.size() and l; l++)
                ans += mp[{b[l-1], b[l]}];
            cout << ans << endl;
        }
    }
    return 0;
}