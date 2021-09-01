#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, f; cin >> n >> f;
    int a[n], b[n], c[n];
    long long ans = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        ans += min(a[i], b[i]);
        c[i] = max(min(b[i]-a[i], a[i]), 0);
    }
    sort(c, c+n);
    for(int i = n-1; i >= 0 and f--; i--)
        ans += c[i];
    cout << ans << endl;
    return 0;
}