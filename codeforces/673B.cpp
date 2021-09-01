#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int mn = 1, mx = n;
    bool ok = false;
    bool div1[n+1], div2[n+1];
    memset(div1, 0, sizeof(div1));
    memset(div2, 0, sizeof(div2));

    for(int i = 0, x, y; i < m; i++)
    {
        cin >> x >> y;
        if(div1[min(x,y)])
            ok = true;
        if(div2[max(x,y)])
            ok = true;
        div1[max(x,y)] = true;
        div2[min(x,y)] = true;
        mn = max(mn, min(x,y));
        mx = min(mx, max(x,y));
    }
    if(ok)
    {
        cout << 0 << endl;
        return 0;
    }
    cout << max(mx-mn, 0) << endl;
    return 0;
}