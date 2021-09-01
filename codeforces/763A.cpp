#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+1;

vector<int> adj[N];
int clr[N];
bool visit[N], flg;

void dfs(int u, int p)
{
    for(int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];
        if(v != p)
        {
            if(clr[u] != clr[v])
                flg = false;
            dfs(v, u);
        }
    }
}
void solve(int x)
{
    flg = true;
    for(int i = 0; i < adj[x].size(); i++)
    {
        dfs(adj[x][i], x);
    }
}
int main()
{
    int n; cin >> n;
    for(int i = 1, u, v; i < n; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; i++)
        cin >> clr[i];
    int rt1 = 0, rt2 = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < adj[i].size(); j++)
        {
            if(clr[i] != clr[adj[i][j]])
            {
                rt1 = i; rt2 = adj[i][j];
                break;
            }
        }
    }
    if(!rt1)
        return !(cout << "YES\n1\n");
    solve(rt1);
    if(flg)
        return !(cout << "YES\n" << rt1 << endl);
    solve(rt2);
    if(flg)
        return !(cout << "YES\n" << rt2 << endl);
    cout << "NO" << endl;
    return 0;
}