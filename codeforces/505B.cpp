#include <bits/stdc++.h>

using namespace std;

#define ff first
#define ss second

int main()
{
    int n, m; cin >> n >> m;
    vector<pair<int,int> > adj[n+1];
    for(int i = 0, a, b, c; i < m; i++)
    {
        cin >> a >> b >> c;
        adj[a].push_back(make_pair(b, c));
        adj[b].push_back(make_pair(a, c));
    }
    int q, frm, to;
    cin >> q;
    while(q--)
    {
        cin >> frm >> to;
        int ans = 0;
        for(int clr = 1; clr <= m; clr++)
        {
            bool visit[n+1];
            memset(visit, 0, sizeof(visit));
            stack<int> nd;
            nd.push(frm);
            visit[frm] = true;
            bool flg = false;
            while(!nd.empty())
            {
                int u = nd.top();
                nd.pop();
                for(int i = 0; i < adj[u].size(); i++)
                {
                    int v = adj[u][i].ff;
                    if(!visit[v] and adj[u][i].ss == clr)
                    {
                        visit[v] = true;
                        if(v == to)
                        {
                            ans++;
                            flg = true;
                            break;
                        }
                        nd.push(v);
                    }
                }
                if(flg)
                    break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}