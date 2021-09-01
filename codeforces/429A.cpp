#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int>ad[n+1];
    for(int i = 1, u, v; i < n; i++)
    {
        cin >> u >> v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    int cur[n+1], tar[n+1];
    cur[0] = tar[0] = 1;
    for(int i = 1; i <= n; i++)
        cin >> cur[i];
    for(int i = 1; i <= n; i++)
        cin >> tar[i];

    int flp[n+1];
    memset(flp, 0, sizeof(flp));

    int fhr[n+1];
    fhr[0] = fhr[1] = 0;

    bool visit[n+1];
    memset(visit, 0, sizeof(visit));
    visit[1] = true;

    vector<int> ans;
    if(cur[1] != tar[1])
    {
        cur[1] ^= 1;
        flp[1] = 1;
        ans.push_back(1);
    }

    stack<int> S;
    S.push(1);
    while(!S.empty())
    {
        int u = S.top();
        S.pop();
        for(int i = 0; i < ad[u].size(); i++)
        {
            int v = ad[u][i];
            if(!visit[v])
            {
                visit[v] = true;
                S.push(v);
                fhr[v] = u;
                if(flp[fhr[u]])
                {
                    cur[v] ^= 1;
                }
                if(cur[v] != tar[v])
                {
                    cur[v] ^= 1;;
                    flp[v] = 1;
                    ans.push_back(v);
                }
                flp[v] = (flp[v] + flp[fhr[u]] ) % 2;
            }
        }
    }
    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++)
        cout << ans[i] << endl;
    return 0;
}