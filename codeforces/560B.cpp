#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;

    if(a1+a2 <= n and b1 <= m and b2 <= m)
        return !(cout << "YES" << endl);
    if(a1+b2 <= n and b1 <= m and a2 <= m)
        return !(cout << "YES" << endl);
    if(b1+a2 <= n and a1 <= m and b2 <= m)
        return !(cout << "YES" << endl);
    if(b1+b2 <= n and a1 <= m and a2 <= m)
        return !(cout << "YES" << endl);

    if(a1+a2 <= m and b1 <= n and b2 <= n)
        return !(cout << "YES" << endl);
    if(a1+b2 <= m and b1 <= n and a2 <= n)
        return !(cout << "YES" << endl);
    if(b1+a2 <= m and a1 <= n and b2 <= n)
        return !(cout << "YES" << endl);
    if(b1+b2 <= m and a1 <= n and a2 <= n)
        return !(cout << "YES" << endl);
    cout << "NO" << endl;
    return 0;
}