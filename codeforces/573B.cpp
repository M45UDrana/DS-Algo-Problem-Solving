#include <bits/stdc++.h>

using namespace std;

const int N = 1e5+5;

int a[N], l[N], r[N];

int main()
{
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    a[0] = 0; a[n+1] = 0;
    for(int i = 1; i <= n; i++)
        l[i] = min(a[i], l[i-1]+1);
    for(int i = n; i >= 1; i--)
        r[i] = min(a[i], r[i+1]+1);
    int ans = 0;
    for(int i = 1; i <= n; i++)
        ans = max(ans, min(l[i], r[i]));
    cout << ans << endl;
    return 0;
}