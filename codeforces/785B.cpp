#include <bits/stdc++.h>

using namespace std;

const int oo = 1e9+7;

int main()
{
    int n; cin >> n;
    int nL = 0, nR = oo;
    for(int i = 0, l, r; i < n; i++)
    {
        cin >> l >> r;
        nL = max(l, nL);
        nR = min(r, nR);
    }
    int m; cin >> m;
    int mL = 0, mR = oo;
    for(int i = 0, l, r; i < m; i++)
    {
        cin >> l >> r;
        mL = max(l, mL);
        mR = min(r, mR);
    }
    cout << max({mL-nR, nL-mR, 0}) << endl;
    return 0;
}