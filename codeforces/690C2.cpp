#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    vector<int>adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool visit[n+1];
    memset(visit, 0, sizeof(visit));
    int dist[n+1];
    memset(dist, 0, sizeof(dist));
    queue<int> q;  
    q.push(1);
    visit[1] = true;
    pair<int,int> in = {1, 0};
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(!visit[v])
            {
                visit[v] = true;
                q.push(v);
                dist[v] = max(dist[v], dist[u]+1);
                if(dist[v] > in.second)
                {
                    in.second = dist[v];
                    in.first = v;
                }
            }
        }
    }
    memset(visit, 0, sizeof(visit));
    memset(dist, 0, sizeof(dist)); 
    q.push(in.first);
    visit[in.first] = true;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(!visit[v])
            {
                visit[v] = true;
                q.push(v);
                dist[v] = max(dist[v], dist[u]+1);
                if(dist[v] > in.second)
                {
                    in.second = dist[v];
                    in.first = v;
                }
            }
        }
    }
    cout << in.second << endl;
    return 0;
}