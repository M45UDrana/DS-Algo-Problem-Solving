#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m; cin >> n >> m;
    int idx_ar[n+1];
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        idx_ar[x] = i;
    }
    int ivl_ar[n+1];
    memset(ivl_ar, 0, sizeof(ivl_ar));
    for(int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        u = idx_ar[u];
        v = idx_ar[v];
        if(v > u)
            swap(v,u);
        ivl_ar[v] = (ivl_ar[v]) ? min(ivl_ar[v],u) : u; 
    }
    int crt_ar[n+1];
    for(int i = n, ivl_mx = n; i > 0; i--)
    {
        if(ivl_ar[i])
            ivl_mx = min(ivl_mx, ivl_ar[i]-1);
        crt_ar[i] = ivl_mx;
    }
    ll ans = 0;
    for(int i = 1; i <= n; i++)
        ans += (crt_ar[i]+1-i);
    cout << ans << endl;
    return 0;
}