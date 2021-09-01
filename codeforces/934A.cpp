#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll n, m; cin >> n >> m;
    ll a[n], b[m];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < m; i++)
        cin >> b[i];
    ll ans = ll(1e18)+5;
    for(int i = 0; i < n; i++)
    {
        ll p = -ll(1e18);
        for(int j = 0; j < n; j++)
        {
            if(j != i)
            {
                for(int l = 0; l < m; l++)
                {
                    p = max(p, a[j]*b[l]);
                }
            }
        }
        ans = min(ans, p);
    }
    cout << ans << endl;
    return 0;
}