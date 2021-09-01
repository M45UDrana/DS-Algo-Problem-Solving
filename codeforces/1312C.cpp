#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

const ll inf = 1e18;
const ll mx = 1e16;
vector<ll>pw;

bool check(ll x, ll i)
{
    if(x == 0)
        return true;
    if(i < 0)
        return false;

    bool ok;
    if(x < pw[i])
    {
        ok = check(x, i-1);
    }
    else 
    {
        ok = check(x-pw[i], i-1);
        if(ok)
            pw[i] = inf;
    }
    return ok;
}
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n, k; cin >> n >> k;
        vector<ll> v(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        sort(v.rbegin(),v.rend());
        for(ll i = 0; i < 60; i++)
        {
            ll x = pow(k,i);
            if(x > mx)
                break;
            pw.pb(x);
        }
        for(int i = 0; i < n; i++)
        {
            if(check(v[i], (ll)pw.size()-1))
                v[i] = 0;
        }
        bool ok = true;
        for(int i = 0; i < n; i++)
            if(v[i])
                ok = false;
        if(ok)
            cout << "YES" << endl;
        else cout << "NO" << endl;
        pw.clear();
    }
    return 0;
}