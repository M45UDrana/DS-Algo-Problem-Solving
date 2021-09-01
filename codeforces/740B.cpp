#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n+1];
    for(int i = 1; i <= n; i++)
       cin >> a[i];
    int ans = 0;
    for(int i = 0, x, y; i < m; i++)
    {
        int cnt = 0;
        cin >> x >> y;
        for(int j = x; j <= y; j++)
            cnt += a[j];
        ans += max(cnt, 0);
    }
    cout << ans << endl;
    return 0;
}