#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, k; cin >> n >> k;
    vector<int> dist[n];
    int maxdis = 0;
    for(int i = 1, x; i <= n; i++)
    {
        cin >> x;
        dist[x].push_back(i);
        maxdis = max(maxdis, x);
    }
    vector<int > adj[n+1];
    queue<int> nd;
    int ans = 0;
    bool flg = true;
    for(int i = 0; i < n; i++)
    {
        if(i)
        {
            int m = nd.size();
            if(i == 1 and m*k < dist[i].size())
                return !(cout << -1 << endl);
            if(m*(k-1) < dist[i].size() and i > 1)
                return !(cout << -1 << endl);
            for(int j = 0, l = 0; j < m; j++)
            {
                int kk = 1;
                if(flg)
                {
                    kk = 0;
                    flg = false;
                }
                int u = nd.front(); nd.pop();
                for(;kk < k and l < dist[i].size(); l++,kk++)
                {
                    adj[u].push_back(dist[i][l]);
                    nd.push(dist[i][l]);
                    ans++;
                }
            }
        }
        else 
        {
            if((int)dist[i].size() != 1)
                return !(cout << -1 << endl);
            nd.push(dist[i][0]);
        }
    }
    cout << ans << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < adj[i].size(); j++)
            cout << i << " " << adj[i][j] << endl;
    }
    return 0;
}