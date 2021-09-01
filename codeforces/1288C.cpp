#include <iostream>

using namespace std;
const int oo = 1e9+7;

int main()
{
    int n, m; cin >> n >> m;
    m *= 2;
    int a[m+1][n+1];
    long long ans = 0;
    for(int i = 1; i <= n; i++)
        a[1][i] = 1;
    for(int i = 0; i <= m; i++)
        a[i][0] = 0;

    for(int i = 2; i <= m; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            a[i][j] = (a[i-1][j] + a[i][j-1]) % oo;
        }
    }
/*    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }*/
    for(int i = 1; i <= n; i++)
        ans = (ans + a[m][i])%oo;
    cout << ans << endl;
    return 0;
}