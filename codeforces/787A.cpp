#include <bits/stdc++.h>

using namespace std;

typedef int ll;

int main()
{
    ll a, b; cin >> a >> b;
    ll c, d; cin >> c >> d;
    ll x = b-d;
    for(ll i = 0; i <= (ll)1e6; i++)
    {
        if((a*i+x)%c == 0 and a*i+b >= d)
            return !(cout << a*i+b << endl);
    }
    cout << -1 << endl;
    return 0;
}