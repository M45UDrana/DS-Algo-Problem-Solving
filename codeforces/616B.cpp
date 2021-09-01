#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n][m];
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        int mn = 1e9+7;
        for(int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            mn = min(mn, a[i][j]);
        }
        res = max(mn, res);
    }
    cout << res << endl;
    return 0;
}