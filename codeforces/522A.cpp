#include <bits/stdc++.h>

using namespace std;

void lower(string &a)
{
    for(int i = 0; i < a.size(); i++)
    {
        if('A' <= a[i] and a[i] <= 'Z')
        {
            a[i] -= 'A';
            a[i] += 'a';
        }
    }
}
int main()
{
    int n; cin >> n;
    map<string, int> mp;
    vector<int> adj[n+5];
    mp["polycarp"] = 1;
    for(int i = 0, in = 2; i < n; i++)
    {
        string a, b; cin >> a >> b >> b;
        lower(a); lower(b);
        if(!mp[b])
            mp[b] = in++;
        int u = mp[b];
        if(!mp[a])
            mp[a] = in++;
        int v = mp[a];
        adj[u].push_back(v);
    }
    bool visit[n+5];
    memset(visit, 0, sizeof(visit));
    int chn[n+5];
    memset(chn, 0, sizeof(chn));
    queue<int>Q;
    Q.push(1);
    chn[1] = 1;
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
                chn[v] = max(chn[u]+1, chn[v]);
            }
        }
    }
    int ans = 0;
    for(int i = 1; i <= n+1; i++)
        ans = max(ans, chn[i]);
    cout << ans << endl;
    return 0;
}