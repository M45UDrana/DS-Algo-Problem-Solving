#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    int n, m; cin >> n >> m;
    int row[n+1], clm[n+1];
    memset(row, 0, sizeof(row));
    memset(clm, 0, sizeof(clm));
    ll ans = (ll)n*n;
    ll rw = n, cl = n;
    for(int i = 0, x, y; i < m; i++)
    {
        cin >> x >> y;
        if(row[x] == 0)
        {
            row[x] = 1;
            ans -= rw;
            cl--;
        }
        if(clm[y] == 0)
        {
            clm[y] = 1;
            ans -= cl;
            rw--;
        }
        cout << ans << " ";
    }
    cout << endl;
    return 0;
}