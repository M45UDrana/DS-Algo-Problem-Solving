#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a+n);
    if(n == 1)
        return !(cout << 0 << endl);
    int x = abs(m-a[1]) + abs(a[1]-a[n-1]);
    int x1 = abs(m-a[n-1]) + abs(a[1]-a[n-1]);
    int y = abs(m-a[n-2]) + abs(a[n-2]-a[0]);
    int y1 = abs(m-a[0]) + abs(a[n-2]-a[0]);
    cout << min(min(x, x1), min(y, y1)) << endl;
    return 0;
}