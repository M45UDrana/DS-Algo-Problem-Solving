#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b; cin >> n >> a >> b;
    if(min(a,b) > 1)
        return !(cout << "NO" << endl);
    if((n == 2 or n == 3) and (a == 1 and b == 1))
        return !(cout << "NO" << endl);
    bool flg = false;
    if(b > a)
    {
        swap(a, b);
        flg = true;
    }
    int ans[n+1][n+1];
    memset(ans, 0, sizeof(ans));
    for(int i = 1; i <= n-a; i++)
    {
        ans[i][i+1] = 1;
        ans[i+1][i] = 1;
    }
    cout << "YES" << endl;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(flg and i != j)
                ans[i][j] ^= 1;
            cout << ans[i][j];
        }
        cout << endl;
    }
    return 0;
}