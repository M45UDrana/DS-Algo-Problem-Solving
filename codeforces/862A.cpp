#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m; 
    int a[101];
    memset(a, 0, sizeof(a));
    for(int i = 0, x; i < n; i++)
    {
        cin >> x;
        a[x]++;
    }
    int ans = 0;
    for(int i = 0; i <= m; i++)
        ans += ((i < m and a[i] == 0) or (i == m and a[i] == 1));
    cout << ans << endl;
    return 0;
}