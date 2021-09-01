#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n; 
    string s; cin >> s;
    s = " " + s;
    int ch_cnt[130];
    memset(ch_cnt, 0, sizeof(ch_cnt));
    int chr_occer[n+1][130];
    memset(chr_occer, 0, sizeof(chr_occer));
    for(int i = 1; i <= n; i++)
    {
        chr_occer[i][s[i]] = i;
        ch_cnt[s[i]]++;
        for(int j = 0; j < 130; j++)
            if(!chr_occer[i][j])
                chr_occer[i][j] = chr_occer[i-1][j];
    }
    int cnt = 0;
    for(int i = 0; i < 130; i++)
        cnt += int (ch_cnt[i] > 0);
    int ans = n;
    for(int i = 1; i <= n; i++)
    {
        int mn = n, mx = 0, tmp_cnt = 0;
        for(int j = 0; j < 130; j++)
        {
            if(chr_occer[i][j] != 0)
            {
                mn = min(mn, chr_occer[i][j]);
                mx = max(mx, chr_occer[i][j]);
                tmp_cnt++;
            }
        }
        if(tmp_cnt == cnt)
            ans = min(ans, mx+1-mn);
    }
    cout << ans << endl;
    return 0;
}