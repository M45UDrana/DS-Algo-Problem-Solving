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
    int color[n+1];
    for(int i = 0; i <= n; i++)
        color[i] = -1;
    bool ok = false;
    for(int i = 1; i <= n; i++)
    {
        if(color[i] != -1)
            continue;
        queue<int>nd;
        nd.push(i);
        color[i] = 0;
        while(!nd.empty())
        {
            int u = nd.front();
            nd.pop();
            int c = color[u];
            for(int j = 0; j < adj[u].size(); j++)
            {
                int v = adj[u][j];
                if(color[v] == -1)
                {
                    color[v] = (c+1)%2;
                    nd.push(v);
                }
                if(color[u] == color[v])
                    ok = true;
            }
        }
    }
    if(ok)
    {
        cout << -1 << endl;
        return 0;
    }
    vector<int> a, b;
    for(int i = 1; i <= n; i++)
    {
        if(color[i] == 0)
            a.push_back(i);
        if(color[i] == 1)
            b.push_back(i);
    }
    cout << a.size() << endl;
    for(int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
    cout << b.size() << endl;
    for(int i = 0; i < b.size(); i++)
        cout << b[i] << " ";
    cout << endl;
    return 0;
}