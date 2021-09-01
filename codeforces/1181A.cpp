#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long x, y, z, ans=0, t;
    cin >> x >> y >> z;
    ans += (x/z + y/z);
    x = x % z;
    y = y % z;
    t = z - max(x, y);
    (z - max(x, y) <= min(x, y)) ? (ans += 1 ) : (t = 0);
    cout << ans << " " << t << endl;
    return 0;
}