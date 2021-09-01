#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, s; cin >> n >>  s;
    int a[s+1];
    memset(a, 0, sizeof(a));
    for(int i = 0; i < n; i++)
    {
        int f, t; cin >> f >> t;
        a[f] = max(a[f], t);
    }
    int ans = -1;
    for(int i = s; i >= 0; i--)
    {
        ans++;
        ans = max(ans, a[i]);
    }
    cout << ans << endl;
    return 0;
}