#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int cst[n+1];
    for(int i = 1; i <= n; i++)
        cin >> cst[i];
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool visit[n+1];
    memset(visit, 0, sizeof(visit));
    long long ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(visit[i])
            continue;
        queue<int> Q;
        Q.push(i);
        visit[i] = true;
        int c = cst[i];
        while(!Q.empty())
        {
            int u = Q.front();
            Q.pop();
            for(int j = 0; j < adj[u].size(); j++)
            {
                int v = adj[u][j];
                if(!visit[v])
                {
                    visit[v] = true;
                    Q.push(v);
                    c = min(c, cst[v]);
                }
            }
        }
        ans += c;
    }
    cout << ans << endl;
    return 0;
}