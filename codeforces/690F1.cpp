#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> adj[n+1];
    for(int i = 1; i < n; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < adj[i].size(); j++)
        {
            int v = adj[i][j];
            ans += (adj[v].size()-1);
        }
    }
    cout << ans / 2 << endl;
    return 0;
}