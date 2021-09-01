#include <bits/stdc++.h>

using namespace std;

#define pb(aa) push_back(aa)
#define mp(aa,bb) make_pair(aa, bb)
const int N = 1e3+10;

string s[N][10];
int id[N];
vector<int>adj[N];
int visit[N];
int n, m, k, w;

void dfs(int u)
{
    visit[u] = true;
    for(int i = 0; i < adj[u].size(); i++)
    {
        if(!visit[adj[u][i]])
        {
            cout << adj[u][i] << " " << u << endl;
            dfs(adj[u][i]);
        }
    }
}
int find(int i)
{
    return id[i] == i ? i : id[i] = find(id[i]);
}

int cost(int k, int l)
{
    int cnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cnt += (s[k][i][j] != s[l][i][j]);
    return cnt*w;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0),cout.tie(0);
    cin >> n >> m >> k >> w;
    for(int i = 1; i <= k; i++)
        for(int j = 0; j < n; j++)
            cin >> s[i][j];

    vector<pair<int,pair<int,int> > > edges;
    for(int i = 1; i <= k; i++)
    {
        edges.pb(mp(n*m, mp(0,i)));
        for(int j = 1; j <= k; j++)
            if(i != j)
                edges.pb(mp(cost(i,j),mp(i,j)));
    }
    sort(edges.begin(), edges.end());

    for(int i = 0; i <= N; i++) id[i] = i;
    int ans = 0;
    for(int i = 0; i < edges.size(); i++)
    {
        int u = edges[i].second.first;
        int v = edges[i].second.second;
        int c = edges[i].first;
        if(find(u) != find(v))
        {
            id[find(u)] = id[find(v)];
            adj[u].pb(v); adj[v].pb(u);
            ans += c;
        }
    }
    cout << ans << endl;
    dfs(0);
    return 0;
}