#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>adj[n+1];
    for(int u = 1, v; u <= n; u++)
    {
        cin >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool visit[n+1];
    memset(visit, 0, sizeof(visit));
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!visit[i])
        {
            ans++;
            stack<int> nd;
            nd.push(i);
            visit[i] = true;
            while(!nd.empty())
            {
                int u = nd.top();
                nd.pop();
                for(int j = 0; j < adj[u].size(); j++)
                {
                    int v = adj[u][j];
                    if(!visit[v])
                    {
                        visit[v] = true;
                        nd.push(v);
                    }
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}