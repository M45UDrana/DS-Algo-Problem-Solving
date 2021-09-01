#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
int n, ans; 
vector<int> adj[N], chld(N, 1);

int dfs(int u, int p)
{
    for(int i = 0; i < adj[u].size(); i++)
    {
        if(adj[u][i] != p)
            chld[u] += dfs(adj[u][i], u);
    }
    if(chld[u]%2 == 0)
    {
        ans++;
        chld[u] = 0;
    }
    return chld[u];
}
int main()
{
    cin >> n;
    for(int i = 1; i < n; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int x = dfs(1, 1);
    if(x)
        ans = 0;
    cout << ans-1 << endl;
    return 0;
}