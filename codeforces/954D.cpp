#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;
typedef pair<string, int> psi;

#define ff first
#define ss second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define d(a,b,c) cout<<a<<" "<<b<<" "<<c<<'\n'
#define IO ios_base::sync_with_stdio(0);cin.tie(0);

vector<int> adj[1001];
bool visit[1001];
int dsts[1001], dstd[1001];

void dfs(int u)
{
    queue<int> Q;
    Q.push(u);
    visit[u] = true;
    while(!Q.empty())
    {
        u = Q.front();
        Q.pop();
        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(!visit[v])
            {
                visit[v] = true;
                Q.push(v);
                dstd[v] = dstd[u]+1;
            }
        }
    }
}

int main()
{
    int n, m, s, t;
    cin >> n >> m >> s >> t;
    int lst[1001][1001];
    memset(lst, 0, sizeof(lst));
    for(int i = 0; i < m; i++)
    {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        lst[u][v] = 1;
        lst[v][u] = 1;
    }
    dfs(s);
    for(int i = 1; i <= n; i++)
        dsts[i] = dstd[i];
    memset(visit, 0, sizeof(visit));
    memset(dstd, 0, sizeof(dstd));
    dfs(t);
    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = i+1; j <= n; j++)
        {
            int d = min(dsts[i]+dstd[j], dstd[i]+dsts[j])+1;
            if(d >= dsts[s]+dstd[s] and lst[i][j] == 0)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}