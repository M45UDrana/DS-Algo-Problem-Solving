#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k = 0; cin >> n;
    vector<int> adj[n];
    for(int i = 1, u, v; i < n; i++)
    {
        cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        k = max(k, max((int)adj[u].size(),
                    (int)adj[v].size())+1);
    }
    cout << k << endl;
    
    int nd_clr[n], prnt[n];
    queue<int> Q;
    Q.push(0);
    nd_clr[0] = 0;
    prnt[0] = 0;

    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        int clr = nd_clr[u];
        for(int i = 0; i < adj[u].size(); i++)
        {
            int v = adj[u][i];
            if(v != prnt[u])
            {
                int c = (clr+1)%k;

                if(c == nd_clr[prnt[u]])
                    c = (c+1)%k;

                nd_clr[v] = c;
                clr = c;
                prnt[v] = u;
                Q.push(v);
            }
        }
    }
    for(int i = 0; i < n; i++)
        cout << nd_clr[i]+1 << " ";
    cout << endl;
    return 0;
}