#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;
int cnt_nd, cnt_edg;

vector<int> adj[N];
bool visit[N];

void dfs(int u)
{
    visit[u] = true;
    cnt_nd++;
    cnt_edg += adj[u].size();
    for(int i = 0; i < adj[u].size(); i++)
    {
        int v = adj[u][i];
        if(!visit[v])
            dfs(v);
    }
}
int main()
{
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        int u,v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(visit, 0, sizeof(visit));
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        cnt_nd = 0, cnt_edg = 0;
        if(!visit[i])
        {
            dfs(i);
            cnt_edg /= 2;
            if(cnt_edg < cnt_nd)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}