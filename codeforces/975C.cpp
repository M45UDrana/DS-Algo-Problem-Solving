#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n, q; cin >> n >> q;
    vector<ll> v(n);
    for(int i = 0; i < n; i++)
    {
        cin >> v[i];
        if(i)
            v[i] += v[i-1];
    }
    ll sum = 0;
    while(q--)
    {
        ll k; cin >> k;
        sum += k;
        int it = lower_bound(v.begin(),v.end(),sum)
            -v.begin();
        if(it == n)
        {
            cout << n << endl;
            sum = 0;
        }
        else
        {
           ll ans = n - (it+bool(v[it] == sum));
           if(ans == 0)
           {
               cout << n << endl;
               sum = 0;
           }
           else cout << ans << endl;
        }
    }
    return 0;
}