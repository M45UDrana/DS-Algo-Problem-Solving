#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int nxt[n+1];
    vector<int> sq_st, sq;
    for(int i = 1; i <= n; i++)
    {
        int u, v; cin >> u >> v;
        if(u == 0)
            sq_st.push_back(i);
        else nxt[u] = i;
        nxt[i] = v;
    }
    for(int i = 0; i < sq_st.size(); i++)
    {
        int x = sq_st[i];
        sq.push_back(x);
        while(nxt[x])
        {
            x = nxt[x];
            sq.push_back(x);
        }
    }
    int pre[n+1];
    memset(nxt, 0, sizeof(nxt));
    int m = sq.size();
    for(int i = 0; i < m; i++)
    {
        if(!i)
        {
            pre[sq[i]] = 0;
            if(i+1 == m)
                nxt[sq[i]] = 0;
            else
                nxt[sq[i]] = sq[i+1];
        }
        else if(i+1 == m)
        {
            pre[sq[i]] = sq[i-1];
            nxt[sq[i]] = 0;
        }
        else
        {
            pre[sq[i]] = sq[i-1];
            nxt[sq[i]] = sq[i+1];
        }
    }
    for(int i = 1; i <= n; i++)
        cout << pre[i] << " " << nxt[i] << endl;
    return 0;
}