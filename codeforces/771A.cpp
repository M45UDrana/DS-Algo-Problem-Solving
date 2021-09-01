#include <bits/stdc++.h>

using namespace std;

const int N = 2e5;

vector<int> adj[N];
bool visit[N];

int main()
{
    ios_base::sync_with_stdio(0);
    int n, m; cin >> n >> m;
    for(int i = 0,u,v; i < m; i++)
    {
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i = 1; i <= n; i++)
    {
        if(visit[i]) continue;
        int cnt_ed = 0, cnt_nd = 0;
        visit[i] = true;
        queue<int> Q;
        Q.push(i);
        while(!Q.empty())
        {
            int u = Q.front();
            Q.pop();
            cnt_nd++;
            cnt_ed += adj[u].size();
            for(int j = 0; j < adj[u].size(); j++)
            {
                int v = adj[u][j];
                if(!visit[v])
                {
                    visit[v] = true;
                    Q.push(v);
                }
            }
        }
        if(cnt_ed != (long long)cnt_nd*(cnt_nd-1))
            return !(cout << "NO" << endl);
    }
    cout << "YES" << endl;
    return 0;
}