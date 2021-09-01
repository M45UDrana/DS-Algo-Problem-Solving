#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

int main()
{
    ll n; cin >> n;
    ll a[n];
    map<ll, int> mp;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = 1;
    }
    vector<ll> v;
    for(int i = 0; i < n; i++)
    {
        ll cur = a[i];
        while(1)
        {
            v.pb(cur);
            if(mp[cur*2])
                cur *= 2;
            else if(cur%3 == 0 and mp[cur/3])
                cur /= 3;
            else break;
        }
        if(v.size() == n)
        {
            for(int i = 0; i < n; i++)
                cout << v[i] << " \n"[i+1==n];
            return 0;
        }
        v.clear();
    }
    return 0;
}