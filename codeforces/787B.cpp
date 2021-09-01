#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, m; cin >> k >> m;
    bool visit[m];
    memset(visit, 0, sizeof(visit));
    for(int i = 0; i < m; i++)
    {
        int n; cin >> n;
        map<int,int>mp;
        bool ok = true;
        for(int j = 0, x; j < n; j++)
        {
            cin >> x;
            int y = -1 * x;
            if(mp[y])
            {
                ok = false;
            }
            mp[x] = 1;
        }
        visit[i] = ok;
    }
    for(int i = 0; i < m; i++)
    {
        if(visit[i])
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}