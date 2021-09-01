#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0), cout.tie(0);
    int n, m, k; cin >> n >> m >> k;
    bool visit[n+1];
    memset(visit, 0, sizeof(visit));
    for(int i = 0, h; i < m; i++)
    {
        cin >> h;
        visit[h] = true;
    }
    int cur = 1;
    for(int i = 0, u, v; i < k; i++)
    {
        cin >> u >> v;
        if(!visit[u] and cur == u)
            cur = v;
        else if(!visit[v] and cur == v)
            cur = u;
    }
    cout << cur << endl;
    return 0;
}