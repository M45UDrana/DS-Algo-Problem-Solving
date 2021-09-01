#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n+1]; a[0] = 0;
    bool ok = false;
    for(int i = 1; i <= n; i++)
    {
        int tmp; cin >> tmp;
        a[i] = tmp % m;
        if(!a[i])
            ok = true;
    }
    if(n > m || ok)
    {
        cout << "YES" << endl;
        return 0;
    }
    sort(a, a+n+1);
    bool dp[n+1][m+1] = {0};
    for(int i = 0; i <= n; i++)
        dp[i][0] = 1;
    for(int i = 1; i <= m; i++)
        dp[0][i] = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            if(dp[i-1][j])
            {
                dp[i][j] = 1;
                dp[i][(j+a[i])%m] = 1;
            }
            else if(j - a[i] >= 0)
            {
                if(dp[i-1][j-a[i]])
                    dp[i][j] = 1;
            }
        }
    }
    if(dp[n][m])
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}