#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll digit(ll x)
{
    ll dig = 0;
    while(x)
    {
        dig += x % 10;
        x /= 10;
    }
    return dig;
}
int main()
{
    ll a, b, c; cin >> a >> b >> c;
    vector<ll> ans;
    for(ll i = 1; i <= 81; i++)
    {
        ll res = b * pow(i, a) + c;
        if(1 <= res and res <= 1e9)
            if(i == digit(res))
                ans.push_back(res);
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    if((int)ans.size() != 0)
        cout << endl;
    return 0;
}