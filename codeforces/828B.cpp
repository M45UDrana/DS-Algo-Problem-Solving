#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int lx = m+1, rx = 0, uy = n+1, dy = 0;
    string s[n];
    int cnt = 0;
    bool ok = true;
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
        for(int j = 0; j < m; j++)
        {
            if(s[i][j] == 'B')
            {
                ok = false;
                cnt++;
                lx = min(lx, j);
                rx = max(rx, j);
                uy = min(uy, i);
                dy = max(dy, i);
            }
        }
    }
    int sql = max(dy+1-uy, rx+1-lx);
    if(ok)
        cout << "1" << endl;
    else if(sql <= n and sql <= m)
        cout << (sql*sql) - cnt << endl;
    else cout << "-1" << endl;
    return 0;
}