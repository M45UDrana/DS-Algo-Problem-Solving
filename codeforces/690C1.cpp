#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(m+1 != n)
        return !(cout << "no" << endl);
    bool visit[n+1];
    memset(visit, 0, sizeof(visit));
    queue<int> Q;
    Q.push(1);
    visit[1] = true;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(!visit[v])
            {
                visit[v] = 1;
                Q.push(v);
            }
        }
    }
    for(int i = 1; i <= n; i++)
        if(!visit[i])
            return !(cout << "no" << endl);
    cout << "yes" << endl;
    return 0;
}