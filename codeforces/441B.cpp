#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, v; cin >> n >> v;
    int days[3005];
    memset(days, 0, sizeof(days));
    for(int i = 0; i < n; i++)
    {
        int x, y; cin >> x >> y;
        days[x] += y;
    }
    int ans = 0, rem = 0;
    for(int i = 1; i < 3003; i++)
    {
        int x = v;
        ans += min(x, rem);
        x -= min(x, rem);
        ans += min(days[i], x);
        rem = days[i] - min(days[i], x);
    }
    cout << ans << endl;
    return 0;
}