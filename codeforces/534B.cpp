#include <bits/stdc++.h>

using namespace std;

const int oo = -1e9+7;

int main()
{
    int v1, v2, t, d;
    cin >> v1 >> v2 >> t >> d;
    int a = v1;
    int b = v2 + (t-1) * d;
    int ans = 0;
    for(int i = 1; i <= t;i++, a += d, b -= d)
        ans += min(a, b);
    cout << ans << endl;
    return 0;
}