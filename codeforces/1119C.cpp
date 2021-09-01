#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            int x; cin >> x;
            if(a[i][j] == x)
                a[i][j] = 0;
            else a[i][j] = 1;
        }
    }
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(a[i][j])
            {
                int k = j+1;
                    while(k < m and a[i][k] != 1)
                        k++;
                if(k == m)
                    return !(cout << "No" << endl);
                a[i][j] ^= 1;
                a[i][k] ^= 1;
                a[i+1][j] ^= 1;
                a[i+1][k] ^= 1;
            }
        }
    }
    for(int i = 0; i < m; i++)
        if(a[n-1][i])
            return !(cout << "No" << endl);
    cout << "Yes" << endl;
    return 0;
}