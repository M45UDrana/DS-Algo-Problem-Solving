#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k; cin >> n >> m >> k;
    int hme[k], hme_cnt[k];
    for(int i = 0; i < k; i++)
        cin >> hme[i];
    vector<int> adj[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bool visit[n+1];
    memset(visit, 0, sizeof(visit));
    for(int i = 0; i < k; i++)
    {
        hme_cnt[i] = 1;
        stack<int> nd;
        nd.push(hme[i]);
        visit[hme[i]] = true;
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
                    hme_cnt[i]++;
                }
            }
        }
    }
    int nd_cnt = 0, mx = 0, in;
    for(int i = 0; i < k; i++)
    {
        nd_cnt += hme_cnt[i];
        if(hme_cnt[i] > mx)
        {
            mx = hme_cnt[i];
            in = i;
        }
    }
    hme_cnt[in] += n - nd_cnt;
    int ans = 0;
    for(int i = 0; i < k; i++)
    {
        int x = hme_cnt[i];
        ans += ((x*x)-x)/2;
    }
    cout << ans - m << endl;
    return 0;
}