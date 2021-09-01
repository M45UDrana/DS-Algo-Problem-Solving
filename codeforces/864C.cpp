#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, f, k; cin >> a >> b >> f >> k;
    int ans = 0, jur = 0, cur = b;
    bool ok = false;

    while(jur < k)
    {
        if(f > cur and ok)
            cur = b - f, ans++;
        if(f > cur)
            return !(cout << -1 << endl);
        cur -= f;
        if(a-f > cur)
            cur = b - (a-f), ans++, ok = 0;
        else cur -= a-f, ok = 1;
        f = a-f;
        jur++;
        if(cur < 0)
            return !(cout << -1 << endl);
    }
    cout << ans << endl;
    return 0;
}