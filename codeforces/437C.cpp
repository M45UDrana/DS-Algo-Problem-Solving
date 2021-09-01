#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n+1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    int sum = 0;
    for(int i = 0; i < m; i++)
    {
        int x, y; cin >> x >> y;
        sum += min(a[x], a[y]);
    }
    cout << sum << endl;
    return 0;
}