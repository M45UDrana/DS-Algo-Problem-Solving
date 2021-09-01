#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k, a, b;
    cin >> k >> a >> b;
    if((a < k and b < k) or (a%k > 0 and (int)b/k == 0) or (b%k > 0 and (int)a/k == 0))
    {
        cout << -1 << endl;
        return 0;
    }
    int ans = a/k;
    ans += b/k;
    cout << ans << endl;
    return 0;
}