#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[101];
    memset(a, 0, sizeof(a));
    for(int i = 0; i < m; i++)
    {
        int k, f; cin >> k >> f;
        a[k] = f;
    }
    int ans = -1;
    for(int i = 1; i <= 100; i++)
    {
        bool flg = true;
        for(int j = 1; j <= 100; j++)
            if(a[j] != 0 and a[j] != (int)(j+i-1)/i)
                flg = false;
        if(flg)
        {
            if(ans != -1 and ans != (int)(n+i-1)/i)
                return !(cout << -1 << endl);
            ans = (n+i-1)/i;
        }
    }
    cout << ans << endl;
    return 0;
}