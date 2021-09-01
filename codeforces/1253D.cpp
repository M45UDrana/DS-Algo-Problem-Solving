#include <bits/stdc++.h>

using namespace std;

const int N = 2e5+5;

int par[N];

int find(int i)
{
    if(i == par[i])
        return par[i];
    par[i] = find(par[i]);
    return par[i];
}
int main()
{
    int n, m; cin >> n >> m;
    for(int i = 1; i <= n; i++)
        par[i] = i;
    for(int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        int pu = find(u);
        int pv = find(v);
        if(pu < pv)
            par[pv] = pu;
        else par[pu] = pv;
    }
    int ans = 0;
    for(int i = 2; i <= n; i++)
    {
        int u = find(i);
        if(u < i)
        {
            int v = find(i-1);
            while(u != v)
            {
                par[v] = u;
                ans++;
                v = find(v-1);
            }
        }
    }
    cout << ans << endl;
    return 0;
}