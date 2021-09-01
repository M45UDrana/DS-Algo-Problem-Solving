#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

int main()
{
    int n; cin >> n;
    vector<pair<int,int> > adj[n];
    for(int i = 1, u, v, c; i < n; i++)
    {
        cin >> u >> v >> c;
        adj[u].push_back(make_pair(v, c));
        adj[v].push_back(make_pair(u, c));
    }
    bool visit[n];
    memset(visit, 0, sizeof(visit));
    visit[0] = true;
    queue<pair<int, int> >Q;
    Q.push(make_pair(0, 0));
    int ans = 0;
    while(!Q.empty())
    {
        pair<int,int> p = Q.front();
        Q.pop();
        int u = p.ff, c = p.ss;
        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i].ff;
            if(!visit[v])
            {
                visit[v] = true;
                Q.push(make_pair(v, adj[u][i].ss+c));
                ans = max(ans, adj[u][i].ss+c);
            }
        }
    }
    cout << ans << endl;
    return 0;
}