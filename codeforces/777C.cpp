#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    int a[n+1][m+1], b[n+1][m+1], mx_srt[n+1];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> a[i][j];

    for(int i = 1; i <= m; i++)
        b[n][i] = 1;
    mx_srt[n] = 1;

    for(int i = n-1; i > 0; i--)
    {
        int x = 0;
        for(int j = 1; j <= m; j++)
        {
            if(a[i+1][j] >= a[i][j])
                b[i][j] = b[i+1][j]+1;
            else b[i][j] = 1;
            x = max(b[i][j], x);
        }
        mx_srt[i] = x;
    }
    int k; cin >> k;
    for(int i = 0; i < k; i++)
    {
        int l, r; cin >> l >> r;
        if(mx_srt[l] >= r+1-l)
            cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}