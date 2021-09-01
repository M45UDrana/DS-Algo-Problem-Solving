#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+7;
vector<int> adj[N];
int subt[N], dpt[N];
double res[N];
int n; 

int dfs(int u, int p)
{
    for(int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];
        if(v != p)
        {
            dpt[v] = dpt[u]+1;
            subt[u] += dfs(v, u);
        }
    }
    subt[u] += 1;
    res[u] = (double)(n - subt[u] - dpt[u]) / 2.0 + dpt[u]+1;
    return subt[u];
}
int main()
{
    cin >> n;
    for(int i = 2; i <= n; i++)
    {
        int p; cin >> p;
        adj[p].push_back(i);
    }
    dfs(1, 0);
    for(int i = 1; i <= n; i++)
        cout << res[i] << " \n"[i==n];
    return 0;
}