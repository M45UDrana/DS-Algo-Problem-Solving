#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n; cin >> n;
    vector<ll> v;
    ll sq = sqrt(n)+.5;
    for(int i = 1; i <= sq; i++)
    {
        if(n%i == 0)
        {
            v.push_back(i);
            if(i*i != n)
                v.push_back(n/i);
        }
    }
    for(int i = (int)v.size()-1; i >= 0; i--)
    {
        ll x = sqrt(v[i]);
        x *= x;
        if(x == v[i] and x > 1)
        {
            for(int j = 0; j < v.size(); j++)
                if(v[j]%x == 0)
                    v[j] = 1;
        }
    }
    ll ans = 1;
    for(int i = 0; i < v.size(); i++)
        ans = max(ans, v[i]);
    cout << ans << endl;
    return 0;
}