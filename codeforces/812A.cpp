#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k[3] = {3, 2, 1};
    int n = 4;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n-1; j++)
        {
            if((a[i][j] and a[i][3]) or (a[i][j] and a[(k[j]+i)%4][3]))
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}