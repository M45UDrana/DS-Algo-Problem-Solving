#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> adj[n];
    for(int i = 1; i < n; i++)
    {
       int u, v; cin >> u >> v;
       u--; v--;
       adj[u].push_back(v);
       adj[v].push_back(u);
    }
    int visit[n];
    memset(visit, 0, sizeof(visit));
    queue<int> nd;
    nd.push(0);
    visit[0] = 1;
    while(!nd.empty())
    {
        int u = nd.front();
        nd.pop();
        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(!visit[v])
            {
                if(visit[u] == 1)
                    visit[v] = 2;
                else visit[v] = 1;
                nd.push(v);
            }
        }
    }
    long long u = 0, v = 0;
    for(int i = 0; i < n; i++)
    {
        if(visit[i] == 1)
            u++;
        else v++;
    }
    cout << u*v - (n-1) << endl;
    return 0;
}