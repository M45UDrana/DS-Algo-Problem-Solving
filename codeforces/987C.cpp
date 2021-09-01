#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n; cin >> n;
    ll s[n];
    for(int i = 0; i < n; i++)
        cin >> s[i];
    ll c[n];
    for(int i = 0; i < n; i++)
        cin >> c[i];
    ll ans = 1e10;
    for(int i = 1; i < n-1; i++)
    {
        int j = i;
        ll c1 = 1e10, c2 = 1e10;
        while(--j >= 0)
        {
            if(s[j] < s[i])
                c1 = min(c[j], c1);
            if(s[j] > s[i])
                c2 = min(c[j], c2);
        }
        ll c3 = 1e10, c4 = 1e10;
        j = i;
        while(++j < n)
        {
            if(s[j] < s[i])
                c3 = min(c3, c[j]);
            if(s[j] > s[i])
                c4 = min(c4, c[j]);
        }
        ans = min({ans, c1+c4+c[i]});
    }
    if(ans >= (ll)1e10)
        cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}