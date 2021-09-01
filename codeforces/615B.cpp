#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n, m; cin >> n >> m;
    vector<int>adj[n+1];
    for(int i = 0, u, v; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> dp(n+1, 1);
    bool visit[n+1];
    memset(visit,0,sizeof(visit));
    for(int i = 1; i <= n; i++)
    {
        queue<int>S;
        S.push(i);
        visit[i] = true;
        sort(adj[i].begin(), adj[i].end());
        while(!S.empty())
        {
            int u = S.front();
            S.pop();
            for(int j = 0; j < adj[u].size(); j++)
            {
                int v = adj[u][j];
                if(!visit[v])
                {
                    visit[v] = true;
                    S.push(v);
                }
                if(u < v)
                    dp[v] = max(dp[v], dp[u]+1);
            }
        }
    }
    ll ans = 0;
    for(int i = 1; i <= n; i++)
    {
        ans = max(ans, (ll)dp[i] * (ll)adj[i].size());
    }
    cout << ans << endl;
    return 0;
}