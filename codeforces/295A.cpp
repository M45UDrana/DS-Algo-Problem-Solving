#include <bits/stdc++.h>

using namespace std;

#define int long long

int32_t main()
{
    int n, m, k; cin >> n >> m >> k;
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    int oper[m+1][3];
    for(int i = 1; i <= m; i++)
        cin >> oper[i][0] >> oper[i][1] >> oper[i][2];
    int query[m+5];
    memset(query, 0, sizeof(query));
    for(int i = 0, x, y; i < k; i++)
    {
        cin >> x >> y;
        query[x]++;
        query[y+1]--;
    }
    int ans[n+5];
    memset(ans, 0, sizeof(ans));
    for(int i = 1, x = 0; i <= m; i++)
    {
        x += query[i];
        ans[oper[i][0]] += x*oper[i][2];
        ans[oper[i][1]+1] -= x*oper[i][2];
    }
    for(int i = 1, x = 0; i <= n; i++)
    {
        x += ans[i];
        cout << x + a[i] << " ";
    }
    cout << endl;

    return 0;
}