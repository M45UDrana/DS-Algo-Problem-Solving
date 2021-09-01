#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ll n, p, ans = 0; cin >> n >> p;
    vector<ll> v;
    for(int i = 1; i <= n; i++)
    {
        ll x = i;
        while(x)
        {
            v.push_back(x%10);
            x /= 10;
        }
        ll s = 1;
        for(int i2 = 0; i2 < 2; i2++)
        {
            reverse(v.begin(),v.end());
            for(int j = 0; j < v.size(); j++)
            {
                (ans += v[j]*s)%=p;
                s *= 10;
            }
        }
        v.clear();
    }
    cout << ans << endl;
    return 0;
}