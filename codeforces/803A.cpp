#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k; cin >> n >> k;
    if(n*n < k) return !(cout << -1 << endl);
    bool a[n][n];
    memset(a, 0, sizeof(a));

    for(int i = 0; i < n; i++)
    {
        if(k)
            a[i][i] = bool(k--);
        if(k >= 2)
        {
            int x = min(k/2, n-(i+1));
            k -= 2*x;
            for(int j = i+1; j < n; j++)
            {
                if(x)
                {
                    a[i][j] = bool(x--);
                    a[j][i] = a[i][j];
                }
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}