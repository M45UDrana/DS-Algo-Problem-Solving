#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m; cin >> n >> m;
    m += 2;
    int a[n][m];
    for(int i = 0; i < n; i++)
    {
        string s; cin >> s;
        for(int j = 0; j < m; j++)
            a[i][j] = s[j]-'0';
    }
    int L = 0, R = 0, ans = 0;
    int posl = 0, posr = 0, rem = 0;
    for(int j = 1; j < m; j++)
    {
        if(a[n-1][j] == 1)
        {
            L = j; R = j;
            posl = j; posr = j;
            ans = j;
        }
    }
    for(int i = n-2; i >= 0; i--)
    {
        int l = -1, r = m;
        for(int j = 0; j < m; j++)
        {
            if(a[i][j] == 1)
            {
                l = max(l, j);
                r = min(r, j);
            }
        }
        if(l != -1)
        {
            int tmpl = min(L+posl+1, R+posr+1)+l;
            int tmpr = min(L+m-posl, R+m-posr) + m-1-r;
            L = tmpl+rem; R = tmpr+rem;
            posl = l; posr = r;
            ans = min(L,R);
            rem = 0;
        }
        else rem++;
    }
    cout << ans << endl;
    return 0;
}