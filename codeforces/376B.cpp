#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int debt[n+1][n+1];
    memset(debt, 0, sizeof(debt));
    for(int i = 0, a,b,c; i < m; i++)
    {
        cin >> a >> b >> c;
        debt[a][b] = c;
    }
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            for(int k = 1; k <= n; k++)
            {
                int x = min(debt[i][j], debt[j][k]);
                debt[i][j] -= x;
                debt[j][k] -= x;
                debt[i][k] += x;
            }
        }
    }
    int sum = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            if(i != j)
                sum += debt[i][j];
        }
    }
    cout << sum << endl;
    return 0;
}