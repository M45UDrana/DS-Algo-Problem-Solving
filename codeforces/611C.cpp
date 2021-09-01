#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, w; cin >> h >> w;
    string s[h];
    for(int i = 0; i < h; i++)
        cin >> s[i];
    int rdp[h][w];
    memset(rdp, 0, sizeof(rdp));
    for(int i = 0; i < h; i++)
    {
        for(int j = 1; j < w; j++)
        {
            if(s[i][j] == '.' and s[i][j-1] == '.')
                rdp[i][j] = max(rdp[i][j], rdp[i][j-1]+1);
            else rdp[i][j] = max(rdp[i][j], rdp[i][j-1]);
        }
        for(int j = 0; i and j < w; j++)
            rdp[i][j] += rdp[i-1][j];
    }
    int cdp[h][w];
    memset(cdp, 0, sizeof(cdp));
    for(int j = 0; j < w; j++)
    {
        for(int i = 1; i < h; i++)
        {
            if(s[i][j] == '.' and s[i-1][j] == '.')
                cdp[i][j] = max(cdp[i][j], cdp[i-1][j]+1);
            else cdp[i][j] = max(cdp[i][j], cdp[i-1][j]);
        }
        for(int i = 0; j and i < h; i++)
            cdp[i][j] += cdp[i][j-1];
    }
    int n, i1, i2, j1, j2, ans; cin >> n;
    while(n--)
    {
        cin >> i1 >> j1 >> i2 >> j2;
        i1--; j1--; i2--; j2--;
        ans = rdp[i2][j2] - rdp[i2][j1];
        if(i1-1 >= 0)
            ans -= rdp[i1-1][j2] - rdp[i1-1][j1];
        ans += cdp[i2][j2] - cdp[i1][j2];
        if(j1-1 >= 0)
            ans -= cdp[i2][j1-1] - cdp[i1][j1-1];
        cout << ans << endl;
    }
    return 0;
}