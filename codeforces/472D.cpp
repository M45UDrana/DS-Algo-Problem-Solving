#include <bits/stdc++.h>

using namespace std;

const int N = 2000;
int id[N];
vector<pair<int,int> > adj[N];

int find(int x)
{
    return (id[x] == x)? x : id[x] = find(id[x]);
}

void unions(int x, int y)
{
    int u = find(x);
    int v = find(y);
    id[u] = id[v];
}

void addedge(int u, int v, int w)
{
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n; cin >> n;
    int a[n][n];
    vector<pair<int,pair<int,int> > >v;
    bool ok = false;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if(i < j)
                v.push_back(make_pair(a[i][j],make_pair(i,j)));
            if(i == j and a[i][j] != 0)
                ok = true;
        }
    }
    if(ok)
        return !(cout << "NO" << endl);

    sort(v.begin(), v.end());
    for(int i = 0; i < N; i++)
        id[i] = i;

    int x, y;
    for(int i = 0; i < v.size(); i++)
    {
        x = v[i].second.first;
        y = v[i].second.second;
        if(find(x) != find(y))
        {
            unions(x,y);
            addedge(x, y, v[i].first);
        }
    }

    for(int i = 0; i < n; i++)
    {
        int used[n], dist[n];
        memset(used, 0, sizeof(used));
        memset(dist, 0, sizeof(dist));
        queue<pair<int,int> >Q;
        Q.push(make_pair(i, 0));
        used[i] = true;
        while(!Q.empty())
        {
            pair<int,int>p = Q.front();
            Q.pop();
            int u = p.first;
            for(int j = 0; j < adj[u].size(); j++)
            {
                int v = adj[u][j].first;
                if(!used[v])
                {
                    used[v] = true;
                    dist[v] = dist[u]+adj[u][j].second;
                    Q.push(make_pair(v, adj[u][j].second));
                    if(dist[v] != a[i][v] or dist[v] == 0)
                        return !(cout << "NO" << endl);
                }
            }
        }
    }
    cout << "YES" << endl;
    return 0;
}