#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    int n; cin >> n;
    vector<int> res(n+5), adj[n+5];
    for(int i = 1; i <= n; i++)
    {
        int x; cin >> x;
        adj[i].push_back(x);
        adj[i].push_back(i+1);
        adj[i].push_back(i-1);
    }
    bool visit[n+5];
    memset(visit, 0, sizeof(visit));
    queue<int> Q;
    Q.push(1);
    visit[1] = true;
    while(!Q.empty())
    {
        int u = Q.front(); Q.pop();
        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(!visit[v])
            {
                visit[v] = true;
                Q.push(v);
                res[v] = res[u]+1;
            }
        }
    }

    for(int i = 1; i <= n; i++)
        cout << res[i] << " ";
    cout << endl;
    return 0;
}