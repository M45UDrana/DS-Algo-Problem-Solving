#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    int n, m; cin >> n >> m;
    int a[n+1], pos[n+1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        adj[a[u]].push_back(a[v]);
        adj[a[v]].push_back(a[u]);
    }
    bool visit[n+1];
    memset(visit, 0, sizeof(visit));
    for(int i = 1; i <= n; i++)
    {
        if(!visit[i])
        {
            vector<int>val, tmp_pos;
            queue<int> Q;
            Q.push(i);
            visit[i] = true;
            val.push_back(i);
            tmp_pos.push_back(pos[i]);
            while(!Q.empty())
            {
                int u = Q.front();
                Q.pop();
                for(int i = 0; i < adj[u].size();i++)
                {
                    int v = adj[u][i];
                    if(!visit[v])
                    {
                        visit[v] = true;
                        Q.push(v);
                        val.push_back(v);
                        tmp_pos.push_back(pos[v]);
                    }
                }
            }
            sort(val.rbegin(),val.rend());
            sort(tmp_pos.begin(),tmp_pos.end());
            for(int i = 0; i < val.size(); i++)
                a[tmp_pos[i]] = val[i];
            val.clear();
            tmp_pos.clear();
        }
    }
    for(int i = 1; i <= n; i++)
        cout << a[i] << " \n"[i==n];
    return 0;
}