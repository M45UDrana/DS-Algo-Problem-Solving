#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n; cin >> n;
    int adj[n+1];
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        adj[i] = x;
    }
    int len[n+1];
    memset(len, 0, sizeof(len));
    for(int x = 1; x <= n; x++)
    {
        int y = x;
        for(int i = 1; i < 105; i++)
        {
            y = adj[y];
            if(y == x)
            {
                if(i%2)
                    len[x] = i;
                else len[x] = i/2;
                break;
            }
        }
        if(!len[x])
            return !(cout << -1 << endl);
    }
    ll ans = len[1];
    for(int i = 2; i <= n; i++)
        ans = ((ll)ans*len[i])/__gcd((ll)ans,(ll)len[i]);
    cout << ans << endl;
    return 0;
}