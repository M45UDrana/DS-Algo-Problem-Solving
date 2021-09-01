#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c,d) cout<<a<<' '<<b<<' '<<c<<' '<<d<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    ll n; cin >> n;
    map<ll,ll> mp;
    for(int i = 0; i < n; i++)
    {
        ll b, d; cin >> b >> d;
        mp[b]++; mp[d]--;
    }
    ll x = 0;
    for(auto &it : mp)
    {
        x += it.second;
        mp[it.first] = x;
    }
    pair<ll,ll> ans = mp(0, 0);
    for(auto &it : mp)
    {
        if(ans.second < it.second)
        {
            ans.first = it.first;
            ans.second = it.second;
        }
    }
    cout << ans.first << " " << ans.second << endl;
    return 0;
}